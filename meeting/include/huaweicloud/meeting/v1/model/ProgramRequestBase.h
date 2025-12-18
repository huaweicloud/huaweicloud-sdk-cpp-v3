
#ifndef HUAWEICLOUD_SDK_MEETING_V1_MODEL_ProgramRequestBase_H_
#define HUAWEICLOUD_SDK_MEETING_V1_MODEL_ProgramRequestBase_H_


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
/// 节目基础信息。
/// </summary>
class HUAWEICLOUD_MEETING_V1_EXPORT  ProgramRequestBase
    : public ModelBase
{
public:
    ProgramRequestBase();
    virtual ~ProgramRequestBase();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ProgramRequestBase members

    /// <summary>
    /// 节目名称。
    /// </summary>

    std::string getProgramName() const;
    bool programNameIsSet() const;
    void unsetprogramName();
    void setProgramName(const std::string& value);


protected:
    std::string programName_;
    bool programNameIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MEETING_V1_MODEL_ProgramRequestBase_H_
