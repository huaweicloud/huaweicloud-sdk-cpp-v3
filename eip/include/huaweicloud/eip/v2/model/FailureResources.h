
#ifndef HUAWEICLOUD_SDK_EIP_V2_MODEL_FailureResources_H_
#define HUAWEICLOUD_SDK_EIP_V2_MODEL_FailureResources_H_


#include <huaweicloud/eip/v2/EipExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 带宽失败成功对象
/// </summary>
class HUAWEICLOUD_EIP_V2_EXPORT  FailureResources
    : public ModelBase
{
public:
    FailureResources();
    virtual ~FailureResources();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// FailureResources members

    /// <summary>
    /// - 功能说明：更新失败的带宽id
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// - 功能说明：错误码
    /// </summary>

    std::string getCode() const;
    bool codeIsSet() const;
    void unsetcode();
    void setCode(const std::string& value);

    /// <summary>
    /// - 功能说明：错误信息
    /// </summary>

    std::string getMessage() const;
    bool messageIsSet() const;
    void unsetmessage();
    void setMessage(const std::string& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string code_;
    bool codeIsSet_;
    std::string message_;
    bool messageIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_EIP_V2_MODEL_FailureResources_H_
