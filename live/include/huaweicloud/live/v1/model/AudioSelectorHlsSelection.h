
#ifndef HUAWEICLOUD_SDK_LIVE_V1_MODEL_AudioSelectorHlsSelection_H_
#define HUAWEICLOUD_SDK_LIVE_V1_MODEL_AudioSelectorHlsSelection_H_


#include <huaweicloud/live/v1/LiveExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// hls音频选择器
/// </summary>
class HUAWEICLOUD_LIVE_V1_EXPORT  AudioSelectorHlsSelection
    : public ModelBase
{
public:
    AudioSelectorHlsSelection();
    virtual ~AudioSelectorHlsSelection();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AudioSelectorHlsSelection members

    /// <summary>
    /// hls音频选择器名
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// hls音频选择器gid
    /// </summary>

    std::string getGroupId() const;
    bool groupIdIsSet() const;
    void unsetgroupId();
    void setGroupId(const std::string& value);


protected:
    std::string name_;
    bool nameIsSet_;
    std::string groupId_;
    bool groupIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LIVE_V1_MODEL_AudioSelectorHlsSelection_H_
