
#ifndef HUAWEICLOUD_SDK_CBR_V1_MODEL_ProtectableResult_H_
#define HUAWEICLOUD_SDK_CBR_V1_MODEL_ProtectableResult_H_


#include <huaweicloud/cbr/v1/CbrExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/cbr/v1/model/VaultGet.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CBR_V1_EXPORT  ProtectableResult
    : public ModelBase
{
public:
    ProtectableResult();
    virtual ~ProtectableResult();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ProtectableResult members

    /// <summary>
    /// 不支持备份的错误码
    /// </summary>

    std::string getCode() const;
    bool codeIsSet() const;
    void unsetcode();
    void setCode(const std::string& value);

    /// <summary>
    /// 不支持备份的原因
    /// </summary>

    std::string getReason() const;
    bool reasonIsSet() const;
    void unsetreason();
    void setReason(const std::string& value);

    /// <summary>
    /// 是否可备份
    /// </summary>

    bool isResult() const;
    bool resultIsSet() const;
    void unsetresult();
    void setResult(bool value);

    /// <summary>
    /// 
    /// </summary>

    VaultGet getVault() const;
    bool vaultIsSet() const;
    void unsetvault();
    void setVault(const VaultGet& value);

    /// <summary>
    /// 资源不可备份的原因信息，当资源可保护性检验失败时才有该字段。
    /// </summary>

    std::string getMessage() const;
    bool messageIsSet() const;
    void unsetmessage();
    void setMessage(const std::string& value);


protected:
    std::string code_;
    bool codeIsSet_;
    std::string reason_;
    bool reasonIsSet_;
    bool result_;
    bool resultIsSet_;
    VaultGet vault_;
    bool vaultIsSet_;
    std::string message_;
    bool messageIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CBR_V1_MODEL_ProtectableResult_H_
