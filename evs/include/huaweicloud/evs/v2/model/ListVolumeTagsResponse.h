
#ifndef HUAWEICLOUD_SDK_EVS_V2_MODEL_ListVolumeTagsResponse_H_
#define HUAWEICLOUD_SDK_EVS_V2_MODEL_ListVolumeTagsResponse_H_


#include <huaweicloud/evs/v2/EvsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

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
/// Response Object
/// </summary>
class HUAWEICLOUD_EVS_V2_EXPORT  ListVolumeTagsResponse
    : public ModelBase, public HttpResponse
{
public:
    ListVolumeTagsResponse();
    virtual ~ListVolumeTagsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListVolumeTagsResponse members

    /// <summary>
    /// 所有云硬盘的标签信息
    /// </summary>

    std::map<std::string, std::vector<std::string>>& getTags();
    bool tagsIsSet() const;
    void unsettags();
    void setTags(const std::map<std::string, std::vector<std::string>>& value);


protected:
    std::map<std::string, std::vector<std::string>> tags_;
    bool tagsIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_EVS_V2_MODEL_ListVolumeTagsResponse_H_
