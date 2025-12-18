
#ifndef HUAWEICLOUD_SDK_MEETING_V1_MODEL_ShowProgramResponse_H_
#define HUAWEICLOUD_SDK_MEETING_V1_MODEL_ShowProgramResponse_H_


#include <huaweicloud/meeting/v1/MeetingExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/meeting/v1/model/ProgramResponseBase.h>
#include <huaweicloud/meeting/v1/model/ProgramItemResponseBase.h>
#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_MEETING_V1_EXPORT  ShowProgramResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowProgramResponse();
    virtual ~ShowProgramResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowProgramResponse members

    /// <summary>
    /// 节目ID。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 更新者。
    /// </summary>

    std::string getLastUpdatedBy() const;
    bool lastUpdatedByIsSet() const;
    void unsetlastUpdatedBy();
    void setLastUpdatedBy(const std::string& value);

    /// <summary>
    /// 更新时间。
    /// </summary>

    int64_t getUpdateTime() const;
    bool updateTimeIsSet() const;
    void unsetupdateTime();
    void setUpdateTime(int64_t value);

    /// <summary>
    /// 节目名称。
    /// </summary>

    std::string getProgramName() const;
    bool programNameIsSet() const;
    void unsetprogramName();
    void setProgramName(const std::string& value);

    /// <summary>
    /// 节目的总素材大小（含单位）。
    /// </summary>

    std::string getMaterialSizeStr() const;
    bool materialSizeStrIsSet() const;
    void unsetmaterialSizeStr();
    void setMaterialSizeStr(const std::string& value);

    /// <summary>
    /// 节目的总播放时长，单位秒。
    /// </summary>

    int32_t getPlayTime() const;
    bool playTimeIsSet() const;
    void unsetplayTime();
    void setPlayTime(int32_t value);

    /// <summary>
    /// 节目素材列表。
    /// </summary>

    std::vector<ProgramItemResponseBase>& getProgramItemList();
    bool programItemListIsSet() const;
    void unsetprogramItemList();
    void setProgramItemList(const std::vector<ProgramItemResponseBase>& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string lastUpdatedBy_;
    bool lastUpdatedByIsSet_;
    int64_t updateTime_;
    bool updateTimeIsSet_;
    std::string programName_;
    bool programNameIsSet_;
    std::string materialSizeStr_;
    bool materialSizeStrIsSet_;
    int32_t playTime_;
    bool playTimeIsSet_;
    std::vector<ProgramItemResponseBase> programItemList_;
    bool programItemListIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MEETING_V1_MODEL_ShowProgramResponse_H_
