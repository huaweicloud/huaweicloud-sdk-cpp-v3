
#ifndef HUAWEICLOUD_SDK_TMS_V1_MODEL_ReqDeleteTag_H_
#define HUAWEICLOUD_SDK_TMS_V1_MODEL_ReqDeleteTag_H_


#include <huaweicloud/tms/v1/TmsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/tms/v1/model/DeleteTagRequest.h>
#include <string>
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
/// 删除标签请求
/// </summary>
class HUAWEICLOUD_TMS_V1_EXPORT  ReqDeleteTag
    : public ModelBase
{
public:
    ReqDeleteTag();
    virtual ~ReqDeleteTag();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ReqDeleteTag members

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

    std::vector<DeleteTagRequest>& getTags();
    bool tagsIsSet() const;
    void unsettags();
    void setTags(const std::vector<DeleteTagRequest>& value);


protected:
    std::string projectId_;
    bool projectIdIsSet_;
    std::vector<ResourceTagBody> resources_;
    bool resourcesIsSet_;
    std::vector<DeleteTagRequest> tags_;
    bool tagsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_TMS_V1_MODEL_ReqDeleteTag_H_
