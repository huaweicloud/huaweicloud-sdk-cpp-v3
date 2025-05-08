
#ifndef HUAWEICLOUD_SDK_VOD_V1_MODEL_EditMediaTaskInput_H_
#define HUAWEICLOUD_SDK_VOD_V1_MODEL_EditMediaTaskInput_H_


#include <huaweicloud/vod/v1/VodExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/vod/v1/model/ObsInfo.h>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_VOD_V1_EXPORT  EditMediaTaskInput
    : public ModelBase
{
public:
    EditMediaTaskInput();
    virtual ~EditMediaTaskInput();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// EditMediaTaskInput members

    /// <summary>
    /// 
    /// </summary>

    ObsInfo getInput() const;
    bool inputIsSet() const;
    void unsetinput();
    void setInput(const ObsInfo& value);

    /// <summary>
    /// 剪切开始时间
    /// </summary>

    std::string getTimelineStart() const;
    bool timelineStartIsSet() const;
    void unsettimelineStart();
    void setTimelineStart(const std::string& value);

    /// <summary>
    /// 剪切结束时间
    /// </summary>

    std::string getTimelineEnd() const;
    bool timelineEndIsSet() const;
    void unsettimelineEnd();
    void setTimelineEnd(const std::string& value);


protected:
    ObsInfo input_;
    bool inputIsSet_;
    std::string timelineStart_;
    bool timelineStartIsSet_;
    std::string timelineEnd_;
    bool timelineEndIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VOD_V1_MODEL_EditMediaTaskInput_H_
