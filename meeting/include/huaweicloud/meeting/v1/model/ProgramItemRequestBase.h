
#ifndef HUAWEICLOUD_SDK_MEETING_V1_MODEL_ProgramItemRequestBase_H_
#define HUAWEICLOUD_SDK_MEETING_V1_MODEL_ProgramItemRequestBase_H_


#include <huaweicloud/meeting/v1/MeetingExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 节目素材信息 。
/// </summary>
class HUAWEICLOUD_MEETING_V1_EXPORT  ProgramItemRequestBase
    : public ModelBase
{
public:
    ProgramItemRequestBase();
    virtual ~ProgramItemRequestBase();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ProgramItemRequestBase members

    /// <summary>
    /// 素材ID。
    /// </summary>

    std::string getMaterialId() const;
    bool materialIdIsSet() const;
    void unsetmaterialId();
    void setMaterialId(const std::string& value);

    /// <summary>
    /// 播放时长。
    /// </summary>

    int32_t getPlayTime() const;
    bool playTimeIsSet() const;
    void unsetplayTime();
    void setPlayTime(int32_t value);


protected:
    std::string materialId_;
    bool materialIdIsSet_;
    int32_t playTime_;
    bool playTimeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MEETING_V1_MODEL_ProgramItemRequestBase_H_
