
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ShowFeatureChildrenRequest_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ShowFeatureChildrenRequest_H_


#include <huaweicloud/cloudtest/v1/CloudtestExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/cloudtest/v1/model/QueryTestItemTreeInfo.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  ShowFeatureChildrenRequest
    : public ModelBase
{
public:
    ShowFeatureChildrenRequest();
    virtual ~ShowFeatureChildrenRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowFeatureChildrenRequest members

    /// <summary>
    /// 
    /// </summary>

    std::string getFeatureId() const;
    bool featureIdIsSet() const;
    void unsetfeatureId();
    void setFeatureId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    QueryTestItemTreeInfo getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const QueryTestItemTreeInfo& value);


protected:
    std::string featureId_;
    bool featureIdIsSet_;
    QueryTestItemTreeInfo body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ShowFeatureChildrenRequest& dereference_from_shared_ptr(std::shared_ptr<ShowFeatureChildrenRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ShowFeatureChildrenRequest_H_
