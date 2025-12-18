
#ifndef HUAWEICLOUD_SDK_MEETING_V1_MODEL_UpdateProgramRequestDTO_H_
#define HUAWEICLOUD_SDK_MEETING_V1_MODEL_UpdateProgramRequestDTO_H_


#include <huaweicloud/meeting/v1/MeetingExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/meeting/v1/model/ProgramItemRequestBase.h>
#include <huaweicloud/meeting/v1/model/ProgramRequestBase.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 更新节目详情响应
/// </summary>
class HUAWEICLOUD_MEETING_V1_EXPORT  UpdateProgramRequestDTO
    : public ModelBase
{
public:
    UpdateProgramRequestDTO();
    virtual ~UpdateProgramRequestDTO();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateProgramRequestDTO members

    /// <summary>
    /// 节目名称。
    /// </summary>

    std::string getProgramName() const;
    bool programNameIsSet() const;
    void unsetprogramName();
    void setProgramName(const std::string& value);

    /// <summary>
    /// 节目素材列表。
    /// </summary>

    std::vector<ProgramItemRequestBase>& getProgramItemList();
    bool programItemListIsSet() const;
    void unsetprogramItemList();
    void setProgramItemList(const std::vector<ProgramItemRequestBase>& value);


protected:
    std::string programName_;
    bool programNameIsSet_;
    std::vector<ProgramItemRequestBase> programItemList_;
    bool programItemListIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MEETING_V1_MODEL_UpdateProgramRequestDTO_H_
