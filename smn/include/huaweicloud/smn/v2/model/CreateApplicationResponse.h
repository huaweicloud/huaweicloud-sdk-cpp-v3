
#ifndef HUAWEICLOUD_SDK_SMN_V2_MODEL_CreateApplicationResponse_H_
#define HUAWEICLOUD_SDK_SMN_V2_MODEL_CreateApplicationResponse_H_

#include <huaweicloud/smn/v2/SmnExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Smn {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_SMN_V2_EXPORT  CreateApplicationResponse
    : public ModelBase, public HttpResponse
{
public:
    CreateApplicationResponse();
    virtual ~CreateApplicationResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// CreateApplicationResponse members

    /// <summary>
    /// 请求的唯一标识ID。
    /// </summary>

    std::string getRequestId() const;
    bool requestIdIsSet() const;
    void unsetrequestId();
    void setRequestId(const std::string& value);

    /// <summary>
    /// Application的唯一资源标识。
    /// </summary>

    std::string getApplicationUrn() const;
    bool applicationUrnIsSet() const;
    void unsetapplicationUrn();
    void setApplicationUrn(const std::string& value);

    /// <summary>
    /// Application资源的ID。
    /// </summary>

    std::string getApplicationId() const;
    bool applicationIdIsSet() const;
    void unsetapplicationId();
    void setApplicationId(const std::string& value);


protected:
    std::string requestId_;
    bool requestIdIsSet_;
    std::string applicationUrn_;
    bool applicationUrnIsSet_;
    std::string applicationId_;
    bool applicationIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_SMN_V2_MODEL_CreateApplicationResponse_H_
