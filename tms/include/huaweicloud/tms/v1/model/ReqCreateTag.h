
#ifndef HUAWEICLOUD_SDK_TMS_V1_MODEL_ReqCreateTag_H_
#define HUAWEICLOUD_SDK_TMS_V1_MODEL_ReqCreateTag_H_

#include <huaweicloud/tms/v1/TmsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/tms/v1/model/CreateTagRequest.h>
#include <vector>
#include <huaweicloud/tms/v1/model/ResourceTagBody.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Tms {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 创建标签请求
/// </summary>
class HUAWEICLOUD_TMS_V1_EXPORT  ReqCreateTag
    : public ModelBase
{
public:
    ReqCreateTag();
    virtual ~ReqCreateTag();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ReqCreateTag members

    /// <summary>
    /// 项目ID，resource_type为region级别服务时为必选项。
    /// </summary>

    std::string getProjectId() const;
    bool projectIdIsSet() const;
    void unsetprojectId();
    void setProjectId(const std::string& value);

    /// <summary>
    /// 资源列表
    /// </summary>

    std::vector<ResourceTagBody>& getResources();
    bool resourcesIsSet() const;
    void unsetresources();
    void setResources(const std::vector<ResourceTagBody>& value);

    /// <summary>
    /// 标签列表
    /// </summary>

    std::vector<CreateTagRequest>& getTags();
    bool tagsIsSet() const;
    void unsettags();
    void setTags(const std::vector<CreateTagRequest>& value);


protected:
    std::string projectId_;
    bool projectIdIsSet_;
    std::vector<ResourceTagBody> resources_;
    bool resourcesIsSet_;
    std::vector<CreateTagRequest> tags_;
    bool tagsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_TMS_V1_MODEL_ReqCreateTag_H_
