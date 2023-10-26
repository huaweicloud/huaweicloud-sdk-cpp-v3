
#ifndef HUAWEICLOUD_SDK_CDN_V2_MODEL_CreateRefreshTasksRequest_H_
#define HUAWEICLOUD_SDK_CDN_V2_MODEL_CreateRefreshTasksRequest_H_


#include <huaweicloud/cdn/v2/CdnExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/cdn/v2/model/RefreshTaskRequest.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_CDN_V2_EXPORT  CreateRefreshTasksRequest
    : public ModelBase
{
public:
    CreateRefreshTasksRequest();
    virtual ~CreateRefreshTasksRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateRefreshTasksRequest members

    /// <summary>
    /// 当用户开启企业项目功能时，该参数生效，表示在当前企业项目下添加缓存刷新任务，\&quot;all\&quot;代表所有项目。注意：当使用子帐号调用接口时，该参数必传。  您可以通过调用企业项目管理服务（EPS）的查询企业项目列表接口（ListEnterpriseProject）查询企业项目id。
    /// </summary>

    std::string getEnterpriseProjectId() const;
    bool enterpriseProjectIdIsSet() const;
    void unsetenterpriseProjectId();
    void setEnterpriseProjectId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    RefreshTaskRequest getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const RefreshTaskRequest& value);


protected:
    std::string enterpriseProjectId_;
    bool enterpriseProjectIdIsSet_;
    RefreshTaskRequest body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    CreateRefreshTasksRequest& dereference_from_shared_ptr(std::shared_ptr<CreateRefreshTasksRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CDN_V2_MODEL_CreateRefreshTasksRequest_H_
