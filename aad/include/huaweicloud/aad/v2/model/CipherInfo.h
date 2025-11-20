
#ifndef HUAWEICLOUD_SDK_AAD_V2_MODEL_CipherInfo_H_
#define HUAWEICLOUD_SDK_AAD_V2_MODEL_CipherInfo_H_


#include <huaweicloud/aad/v2/AadExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Aad {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// cipher
/// </summary>
class HUAWEICLOUD_AAD_V2_EXPORT  CipherInfo
    : public ModelBase
{
public:
    CipherInfo();
    virtual ~CipherInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CipherInfo members

    /// <summary>
    /// 套件名称
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 对应的加密算法
    /// </summary>

    std::string getAlgo() const;
    bool algoIsSet() const;
    void unsetalgo();
    void setAlgo(const std::string& value);

    /// <summary>
    /// 中文描述
    /// </summary>

    std::string getDescCn() const;
    bool descCnIsSet() const;
    void unsetdescCn();
    void setDescCn(const std::string& value);

    /// <summary>
    /// 英文描述
    /// </summary>

    std::string getDescEn() const;
    bool descEnIsSet() const;
    void unsetdescEn();
    void setDescEn(const std::string& value);


protected:
    std::string name_;
    bool nameIsSet_;
    std::string algo_;
    bool algoIsSet_;
    std::string descCn_;
    bool descCnIsSet_;
    std::string descEn_;
    bool descEnIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_AAD_V2_MODEL_CipherInfo_H_
