
#ifndef HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_UploadPublisherIconRequest_H_
#define HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_UploadPublisherIconRequest_H_


#include <huaweicloud/codeartspipeline/v2/CodeArtsPipelineExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/codeartspipeline/v2/model/UploadPublisherIconRequestBody.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_CODEARTSPIPELINE_V2_EXPORT  UploadPublisherIconRequest
    : public ModelBase
{
public:
    UploadPublisherIconRequest();
    virtual ~UploadPublisherIconRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UploadPublisherIconRequest members

    /// <summary>
    /// 租户ID
    /// </summary>

    std::string getDomainId() const;
    bool domainIdIsSet() const;
    void unsetdomainId();
    void setDomainId(const std::string& value);

    /// <summary>
    /// 发布商名称
    /// </summary>

    std::string getPublisherEnName() const;
    bool publisherEnNameIsSet() const;
    void unsetpublisherEnName();
    void setPublisherEnName(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    UploadPublisherIconRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const UploadPublisherIconRequestBody& value);


protected:
    std::string domainId_;
    bool domainIdIsSet_;
    std::string publisherEnName_;
    bool publisherEnNameIsSet_;
    UploadPublisherIconRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    UploadPublisherIconRequest& dereference_from_shared_ptr(std::shared_ptr<UploadPublisherIconRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_UploadPublisherIconRequest_H_
