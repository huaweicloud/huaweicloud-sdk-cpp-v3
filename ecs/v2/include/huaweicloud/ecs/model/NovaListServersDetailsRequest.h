
#ifndef HUAWEICLOUD_SDK_ECS_V2_MODEL_NovaListServersDetailsRequest_H_
#define HUAWEICLOUD_SDK_ECS_V2_MODEL_NovaListServersDetailsRequest_H_

#include <huaweicloud/ecs/EcsExport.h>

#include "huaweicloud/core/utils/ModelBase.h"
#include "huaweicloud/core/http/HttpResponse.h"

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;

/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_ECS_EXPORT  NovaListServersDetailsRequest
    : public ModelBase
{
public:
    NovaListServersDetailsRequest();
    virtual ~NovaListServersDetailsRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// NovaListServersDetailsRequest members

    /// <summary>
    /// 
    /// </summary>

    std::string getChangesSince() const;
    bool changesSinceIsSet() const;
    void unsetchangesSince();
    void setChangesSince(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    std::string getFlavor() const;
    bool flavorIsSet() const;
    void unsetflavor();
    void setFlavor(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    std::string getImage() const;
    bool imageIsSet() const;
    void unsetimage();
    void setImage(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    std::string getIp() const;
    bool ipIsSet() const;
    void unsetip();
    void setIp(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    int32_t getLimit() const;
    bool limitIsSet() const;
    void unsetlimit();
    void setLimit(int32_t value);

    /// <summary>
    /// 
    /// </summary>

    std::string getMarker() const;
    bool markerIsSet() const;
    void unsetmarker();
    void setMarker(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    std::string getNotTags() const;
    bool notTagsIsSet() const;
    void unsetnotTags();
    void setNotTags(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    std::string getReservationId() const;
    bool reservationIdIsSet() const;
    void unsetreservationId();
    void setReservationId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    std::string getSortKey() const;
    bool sortKeyIsSet() const;
    void unsetsortKey();
    void setSortKey(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    std::string getTags() const;
    bool tagsIsSet() const;
    void unsettags();
    void setTags(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    std::string getOpenStackAPIVersion() const;
    bool openStackAPIVersionIsSet() const;
    void unsetopenStackAPIVersion();
    void setOpenStackAPIVersion(const std::string& value);


protected:
    std::string changesSince_;
    bool changesSinceIsSet_;
    std::string flavor_;
    bool flavorIsSet_;
    std::string image_;
    bool imageIsSet_;
    std::string ip_;
    bool ipIsSet_;
    int32_t limit_;
    bool limitIsSet_;
    std::string marker_;
    bool markerIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string notTags_;
    bool notTagsIsSet_;
    std::string reservationId_;
    bool reservationIdIsSet_;
    std::string sortKey_;
    bool sortKeyIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::string tags_;
    bool tagsIsSet_;
    std::string openStackAPIVersion_;
    bool openStackAPIVersionIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    NovaListServersDetailsRequest& dereference_from_shared_ptr(std::shared_ptr<NovaListServersDetailsRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ECS_V2_MODEL_NovaListServersDetailsRequest_H_
