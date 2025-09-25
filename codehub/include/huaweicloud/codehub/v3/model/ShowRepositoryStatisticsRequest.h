
#ifndef HUAWEICLOUD_SDK_CODEHUB_V3_MODEL_ShowRepositoryStatisticsRequest_H_
#define HUAWEICLOUD_SDK_CODEHUB_V3_MODEL_ShowRepositoryStatisticsRequest_H_


#include <huaweicloud/codehub/v3/CodeHubExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/codehub/v3/model/ShowRepositoryStatisticsRequestBody.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_CODEHUB_V3_EXPORT  ShowRepositoryStatisticsRequest
    : public ModelBase
{
public:
    ShowRepositoryStatisticsRequest();
    virtual ~ShowRepositoryStatisticsRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowRepositoryStatisticsRequest members

    /// <summary>
    /// 仓库的主键id
    /// </summary>

    int32_t getRepositoryId() const;
    bool repositoryIdIsSet() const;
    void unsetrepositoryId();
    void setRepositoryId(int32_t value);

    /// <summary>
    /// 
    /// </summary>

    ShowRepositoryStatisticsRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const ShowRepositoryStatisticsRequestBody& value);


protected:
    int32_t repositoryId_;
    bool repositoryIdIsSet_;
    ShowRepositoryStatisticsRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ShowRepositoryStatisticsRequest& dereference_from_shared_ptr(std::shared_ptr<ShowRepositoryStatisticsRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEHUB_V3_MODEL_ShowRepositoryStatisticsRequest_H_
