
#ifndef HUAWEICLOUD_SDK_MEETING_V1_MODEL_AddCorpResDTO_H_
#define HUAWEICLOUD_SDK_MEETING_V1_MODEL_AddCorpResDTO_H_


#include <huaweicloud/meeting/v1/MeetingExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/meeting/v1/model/ResourceDTO.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 企业的资源信息。
/// </summary>
class HUAWEICLOUD_MEETING_V1_EXPORT  AddCorpResDTO
    : public ModelBase
{
public:
    AddCorpResDTO();
    virtual ~AddCorpResDTO();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AddCorpResDTO members

    /// <summary>
    /// 企业待添加的资源列表。
    /// </summary>

    std::vector<ResourceDTO>& getResource();
    bool resourceIsSet() const;
    void unsetresource();
    void setResource(const std::vector<ResourceDTO>& value);


protected:
    std::vector<ResourceDTO> resource_;
    bool resourceIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MEETING_V1_MODEL_AddCorpResDTO_H_
