
#ifndef HUAWEICLOUD_SDK_EVS_V2_MODEL_Resource_H_
#define HUAWEICLOUD_SDK_EVS_V2_MODEL_Resource_H_


#include <huaweicloud/evs/v2/EvsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/evs/v2/model/VolumeDetailForTag.h>
#include <string>
#include <map>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_EVS_V2_EXPORT  Resource
    : public ModelBase
{
public:
    Resource();
    virtual ~Resource();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// Resource members

    /// <summary>
    /// 资源ID。
    /// </summary>

    std::string getResourceId() const;
    bool resourceIdIsSet() const;
    void unsetresourceId();
    void setResourceId(const std::string& value);

    /// <summary>
    /// 资源名称。
    /// </summary>

    std::string getResourceName() const;
    bool resourceNameIsSet() const;
    void unsetresourceName();
    void setResourceName(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    VolumeDetailForTag getResourceDetail() const;
    bool resourceDetailIsSet() const;
    void unsetresourceDetail();
    void setResourceDetail(const VolumeDetailForTag& value);

    /// <summary>
    /// 标签列表。
    /// </summary>

    std::vector<std::map<std::string, std::string>>& getTags();
    bool tagsIsSet() const;
    void unsettags();
    void setTags(const std::vector<std::map<std::string, std::string>>& value);


protected:
    std::string resourceId_;
    bool resourceIdIsSet_;
    std::string resourceName_;
    bool resourceNameIsSet_;
    VolumeDetailForTag resourceDetail_;
    bool resourceDetailIsSet_;
    std::vector<std::map<std::string, std::string>> tags_;
    bool tagsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_EVS_V2_MODEL_Resource_H_
