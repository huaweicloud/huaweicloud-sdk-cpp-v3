
#ifndef HUAWEICLOUD_SDK_DRS_V5_MODEL_ResourceInstance_H_
#define HUAWEICLOUD_SDK_DRS_V5_MODEL_ResourceInstance_H_


#include <huaweicloud/drs/v5/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/drs/v5/model/ResourceTagInfo.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 查询标签返回资源信息体
/// </summary>
class HUAWEICLOUD_DRS_V5_EXPORT  ResourceInstance
    : public ModelBase
{
public:
    ResourceInstance();
    virtual ~ResourceInstance();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ResourceInstance members

    /// <summary>
    /// 资源ID。
    /// </summary>

    std::string getResourceId() const;
    bool resourceIdIsSet() const;
    void unsetresourceId();
    void setResourceId(const std::string& value);

    /// <summary>
    /// 资源详情。 资源对象，用于扩展。默认为空。
    /// </summary>

    std::string getResourceDetail() const;
    bool resourceDetailIsSet() const;
    void unsetresourceDetail();
    void setResourceDetail(const std::string& value);

    /// <summary>
    /// 资源名称。
    /// </summary>

    std::string getResourceName() const;
    bool resourceNameIsSet() const;
    void unsetresourceName();
    void setResourceName(const std::string& value);

    /// <summary>
    /// 标签列表。
    /// </summary>

    std::vector<ResourceTagInfo>& getTags();
    bool tagsIsSet() const;
    void unsettags();
    void setTags(const std::vector<ResourceTagInfo>& value);


protected:
    std::string resourceId_;
    bool resourceIdIsSet_;
    std::string resourceDetail_;
    bool resourceDetailIsSet_;
    std::string resourceName_;
    bool resourceNameIsSet_;
    std::vector<ResourceTagInfo> tags_;
    bool tagsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V5_MODEL_ResourceInstance_H_
