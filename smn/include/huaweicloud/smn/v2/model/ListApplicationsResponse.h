
#ifndef HUAWEICLOUD_SDK_SMN_V2_MODEL_ListApplicationsResponse_H_
#define HUAWEICLOUD_SDK_SMN_V2_MODEL_ListApplicationsResponse_H_

#include <huaweicloud/smn/v2/SmnExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/smn/v2/model/ApplicationItem.h>
#include <vector>

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
class HUAWEICLOUD_SMN_V2_EXPORT  ListApplicationsResponse
    : public ModelBase, public HttpResponse
{
public:
    ListApplicationsResponse();
    virtual ~ListApplicationsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ListApplicationsResponse members

    /// <summary>
    /// 请求的唯一标识ID。
    /// </summary>

    std::string getRequestId() const;
    bool requestIdIsSet() const;
    void unsetrequestId();
    void setRequestId(const std::string& value);

    /// <summary>
    /// 返回的Application个数。该参数不受offset和limit影响，即返回的是您账户下所有的Application个数。
    /// </summary>

    int32_t getApplicationCount() const;
    bool applicationCountIsSet() const;
    void unsetapplicationCount();
    void setApplicationCount(int32_t value);

    /// <summary>
    /// Application列表。
    /// </summary>

    std::vector<ApplicationItem>& getApplications();
    bool applicationsIsSet() const;
    void unsetapplications();
    void setApplications(const std::vector<ApplicationItem>& value);


protected:
    std::string requestId_;
    bool requestIdIsSet_;
    int32_t applicationCount_;
    bool applicationCountIsSet_;
    std::vector<ApplicationItem> applications_;
    bool applicationsIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_SMN_V2_MODEL_ListApplicationsResponse_H_
