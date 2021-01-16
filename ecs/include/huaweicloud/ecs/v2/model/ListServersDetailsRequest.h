
#ifndef HUAWEICLOUD_SDK_ECS_V2_MODEL_ListServersDetailsRequest_H_
#define HUAWEICLOUD_SDK_ECS_V2_MODEL_ListServersDetailsRequest_H_

#include <huaweicloud/ecs/v2/EcsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

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
class HUAWEICLOUD_ECS_V2_EXPORT  ListServersDetailsRequest
    : public ModelBase
{
public:
    ListServersDetailsRequest();
    virtual ~ListServersDetailsRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ListServersDetailsRequest members

    /// <summary>
    /// 
    /// </summary>

    std::string getEnterpriseProjectId() const;
    bool enterpriseProjectIdIsSet() const;
    void unsetenterpriseProjectId();
    void setEnterpriseProjectId(const std::string& value);

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

    int32_t getOffset() const;
    bool offsetIsSet() const;
    void unsetoffset();
    void setOffset(int32_t value);

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


protected:
    std::string enterpriseProjectId_;
    bool enterpriseProjectIdIsSet_;
    std::string flavor_;
    bool flavorIsSet_;
    std::string ip_;
    bool ipIsSet_;
    int32_t limit_;
    bool limitIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string notTags_;
    bool notTagsIsSet_;
    int32_t offset_;
    bool offsetIsSet_;
    std::string reservationId_;
    bool reservationIdIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::string tags_;
    bool tagsIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListServersDetailsRequest& dereference_from_shared_ptr(std::shared_ptr<ListServersDetailsRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ECS_V2_MODEL_ListServersDetailsRequest_H_
