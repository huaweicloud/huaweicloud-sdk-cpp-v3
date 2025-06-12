
#ifndef HUAWEICLOUD_SDK_ECS_V2_MODEL_ListRecycleBinServersRequest_H_
#define HUAWEICLOUD_SDK_ECS_V2_MODEL_ListRecycleBinServersRequest_H_


#include <huaweicloud/ecs/v2/EcsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

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
class HUAWEICLOUD_ECS_V2_EXPORT  ListRecycleBinServersRequest
    : public ModelBase
{
public:
    ListRecycleBinServersRequest();
    virtual ~ListRecycleBinServersRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListRecycleBinServersRequest members

    /// <summary>
    /// 所有租户 管理员字段 1: 返回所有租户的VM 0: 返回当前租户的VM，如果为0，与不设置该查询字段的效果一致
    /// </summary>

    std::string getAllTenants() const;
    bool allTenantsIsSet() const;
    void unsetallTenants();
    void setAllTenants(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    std::string getAvailabilityZone() const;
    bool availabilityZoneIsSet() const;
    void unsetavailabilityZone();
    void setAvailabilityZone(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    std::string getExpectFields() const;
    bool expectFieldsIsSet() const;
    void unsetexpectFields();
    void setExpectFields(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    std::string getIpAddress() const;
    bool ipAddressIsSet() const;
    void unsetipAddress();
    void setIpAddress(const std::string& value);

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

    std::string getOffset() const;
    bool offsetIsSet() const;
    void unsetoffset();
    void setOffset(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    std::vector<std::string>& getTags();
    bool tagsIsSet() const;
    void unsettags();
    void setTags(const std::vector<std::string>& value);

    /// <summary>
    /// 
    /// </summary>

    std::vector<std::string>& getTagsKey();
    bool tagsKeyIsSet() const;
    void unsettagsKey();
    void setTagsKey(const std::vector<std::string>& value);


protected:
    std::string allTenants_;
    bool allTenantsIsSet_;
    std::string availabilityZone_;
    bool availabilityZoneIsSet_;
    std::string expectFields_;
    bool expectFieldsIsSet_;
    std::string ipAddress_;
    bool ipAddressIsSet_;
    int32_t limit_;
    bool limitIsSet_;
    std::string marker_;
    bool markerIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string offset_;
    bool offsetIsSet_;
    std::vector<std::string> tags_;
    bool tagsIsSet_;
    std::vector<std::string> tagsKey_;
    bool tagsKeyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListRecycleBinServersRequest& dereference_from_shared_ptr(std::shared_ptr<ListRecycleBinServersRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ECS_V2_MODEL_ListRecycleBinServersRequest_H_
