
#ifndef HUAWEICLOUD_SDK_GA_V1_MODEL_IpGroupDetail_H_
#define HUAWEICLOUD_SDK_GA_V1_MODEL_IpGroupDetail_H_


#include <huaweicloud/ga/v1/GaExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/ga/v1/model/ListenerAccessControlPolicy.h>
#include <huaweicloud/ga/v1/model/IpInfo.h>
#include <string>
#include <huaweicloud/ga/v1/model/ConfigStatus.h>
#include <cpprest/details/basic_types.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Ga {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// IP地址组详情。
/// </summary>
class HUAWEICLOUD_GA_V1_EXPORT  IpGroupDetail
    : public ModelBase
{
public:
    IpGroupDetail();
    virtual ~IpGroupDetail();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// IpGroupDetail members

    /// <summary>
    /// IP地址组ID。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// IP地址组名称。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// IP地址组描述。
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    ConfigStatus getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const ConfigStatus& value);

    /// <summary>
    /// IP地址组中的IP网段列表。
    /// </summary>

    std::vector<IpInfo>& getIpList();
    bool ipListIsSet() const;
    void unsetipList();
    void setIpList(const std::vector<IpInfo>& value);

    /// <summary>
    /// 
    /// </summary>

    std::vector<ListenerAccessControlPolicy>& getAssociatedListeners();
    bool associatedListenersIsSet() const;
    void unsetassociatedListeners();
    void setAssociatedListeners(const std::vector<ListenerAccessControlPolicy>& value);

    /// <summary>
    /// 创建时间。
    /// </summary>

    utility::datetime getCreatedAt() const;
    bool createdAtIsSet() const;
    void unsetcreatedAt();
    void setCreatedAt(const utility::datetime& value);

    /// <summary>
    /// 更新时间。
    /// </summary>

    utility::datetime getUpdatedAt() const;
    bool updatedAtIsSet() const;
    void unsetupdatedAt();
    void setUpdatedAt(const utility::datetime& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    ConfigStatus status_;
    bool statusIsSet_;
    std::vector<IpInfo> ipList_;
    bool ipListIsSet_;
    std::vector<ListenerAccessControlPolicy> associatedListeners_;
    bool associatedListenersIsSet_;
    utility::datetime createdAt_;
    bool createdAtIsSet_;
    utility::datetime updatedAt_;
    bool updatedAtIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GA_V1_MODEL_IpGroupDetail_H_
