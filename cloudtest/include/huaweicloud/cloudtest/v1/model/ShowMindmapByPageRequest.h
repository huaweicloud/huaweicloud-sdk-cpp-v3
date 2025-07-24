
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ShowMindmapByPageRequest_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ShowMindmapByPageRequest_H_


#include <huaweicloud/cloudtest/v1/CloudtestExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/cloudtest/v1/model/CommRequestMindmapPageParamV3.h>

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
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  ShowMindmapByPageRequest
    : public ModelBase
{
public:
    ShowMindmapByPageRequest();
    virtual ~ShowMindmapByPageRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowMindmapByPageRequest members

    /// <summary>
    /// 项目ID，固定长度32位字符（字母和数字）。
    /// </summary>

    std::string getProjectId() const;
    bool projectIdIsSet() const;
    void unsetprojectId();
    void setProjectId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    CommRequestMindmapPageParamV3 getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const CommRequestMindmapPageParamV3& value);


protected:
    std::string projectId_;
    bool projectIdIsSet_;
    CommRequestMindmapPageParamV3 body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ShowMindmapByPageRequest& dereference_from_shared_ptr(std::shared_ptr<ShowMindmapByPageRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ShowMindmapByPageRequest_H_
