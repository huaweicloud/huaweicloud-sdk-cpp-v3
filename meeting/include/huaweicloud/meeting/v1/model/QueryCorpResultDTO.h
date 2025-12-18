
#ifndef HUAWEICLOUD_SDK_MEETING_V1_MODEL_QueryCorpResultDTO_H_
#define HUAWEICLOUD_SDK_MEETING_V1_MODEL_QueryCorpResultDTO_H_


#include <huaweicloud/meeting/v1/MeetingExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/meeting/v1/model/QueryAdminResultDTO.h>
#include <huaweicloud/meeting/v1/model/OrgGroupDTO.h>
#include <huaweicloud/meeting/v1/model/QueryCorpBasicResultDTO.h>
#include <string>
#include <huaweicloud/meeting/v1/model/QueryCorpResResultDTO.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_MEETING_V1_EXPORT  QueryCorpResultDTO
    : public ModelBase
{
public:
    QueryCorpResultDTO();
    virtual ~QueryCorpResultDTO();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// QueryCorpResultDTO members

    /// <summary>
    /// 
    /// </summary>

    QueryCorpBasicResultDTO getBasicInfo() const;
    bool basicInfoIsSet() const;
    void unsetbasicInfo();
    void setBasicInfo(const QueryCorpBasicResultDTO& value);

    /// <summary>
    /// 
    /// </summary>

    QueryAdminResultDTO getAdminInfo() const;
    bool adminInfoIsSet() const;
    void unsetadminInfo();
    void setAdminInfo(const QueryAdminResultDTO& value);

    /// <summary>
    /// 
    /// </summary>

    QueryCorpResResultDTO getResInfo() const;
    bool resInfoIsSet() const;
    void unsetresInfo();
    void setResInfo(const QueryCorpResResultDTO& value);

    /// <summary>
    /// 
    /// </summary>

    OrgGroupDTO getGroupDTO() const;
    bool groupDTOIsSet() const;
    void unsetgroupDTO();
    void setGroupDTO(const OrgGroupDTO& value);

    /// <summary>
    /// 企业id。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);


protected:
    QueryCorpBasicResultDTO basicInfo_;
    bool basicInfoIsSet_;
    QueryAdminResultDTO adminInfo_;
    bool adminInfoIsSet_;
    QueryCorpResResultDTO resInfo_;
    bool resInfoIsSet_;
    OrgGroupDTO groupDTO_;
    bool groupDTOIsSet_;
    std::string id_;
    bool idIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MEETING_V1_MODEL_QueryCorpResultDTO_H_
