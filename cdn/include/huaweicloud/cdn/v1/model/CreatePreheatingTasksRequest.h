
#ifndef HUAWEICLOUD_SDK_CDN_V1_MODEL_CreatePreheatingTasksRequest_H_
#define HUAWEICLOUD_SDK_CDN_V1_MODEL_CreatePreheatingTasksRequest_H_

#include <huaweicloud/cdn/v1/CdnExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cdn/v1/model/PreheatingTaskRequest.h>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_CDN_V1_EXPORT  CreatePreheatingTasksRequest
    : public ModelBase
{
public:
    CreatePreheatingTasksRequest();
    virtual ~CreatePreheatingTasksRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// CreatePreheatingTasksRequest members

    /// <summary>
    /// 当用户开启企业项目功能时，该参数生效，表示在当前企业项目下添加缓存预热任务，\&quot;all\&quot;代表所有项目。注意：当使用子帐号调用接口时，该参数必传。  您可以通过调用企业项目管理服务（EPS）的查询企业项目列表接口（ListEnterpriseProject）查询企业项目id。
    /// </summary>

    std::string getEnterpriseProjectId() const;
    bool enterpriseProjectIdIsSet() const;
    void unsetenterpriseProjectId();
    void setEnterpriseProjectId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    PreheatingTaskRequest getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const PreheatingTaskRequest& value);


protected:
    std::string enterpriseProjectId_;
    bool enterpriseProjectIdIsSet_;
    PreheatingTaskRequest body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    CreatePreheatingTasksRequest& dereference_from_shared_ptr(std::shared_ptr<CreatePreheatingTasksRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CDN_V1_MODEL_CreatePreheatingTasksRequest_H_
