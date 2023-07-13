
#ifndef HUAWEICLOUD_SDK_ECS_V2_MODEL_NovaServerFault_H_
#define HUAWEICLOUD_SDK_ECS_V2_MODEL_NovaServerFault_H_

#include <huaweicloud/ecs/v2/EcsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_ECS_V2_EXPORT  NovaServerFault
    : public ModelBase
{
public:
    NovaServerFault();
    virtual ~NovaServerFault();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// NovaServerFault members

    /// <summary>
    /// 错误码。
    /// </summary>

    int32_t getCode() const;
    bool codeIsSet() const;
    void unsetcode();
    void setCode(int32_t value);

    /// <summary>
    /// 异常出现的时间。
    /// </summary>

    std::string getCreated() const;
    bool createdIsSet() const;
    void unsetcreated();
    void setCreated(const std::string& value);

    /// <summary>
    /// 异常描述信息。
    /// </summary>

    std::string getMessage() const;
    bool messageIsSet() const;
    void unsetmessage();
    void setMessage(const std::string& value);

    /// <summary>
    /// 异常详情信息。
    /// </summary>

    std::string getDetails() const;
    bool detailsIsSet() const;
    void unsetdetails();
    void setDetails(const std::string& value);


protected:
    int32_t code_;
    bool codeIsSet_;
    std::string created_;
    bool createdIsSet_;
    std::string message_;
    bool messageIsSet_;
    std::string details_;
    bool detailsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ECS_V2_MODEL_NovaServerFault_H_
