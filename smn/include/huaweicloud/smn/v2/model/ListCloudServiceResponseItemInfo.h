
#ifndef HUAWEICLOUD_SDK_SMN_V2_MODEL_ListCloudServiceResponseItemInfo_H_
#define HUAWEICLOUD_SDK_SMN_V2_MODEL_ListCloudServiceResponseItemInfo_H_


#include <huaweicloud/smn/v2/SmnExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Smn {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_SMN_V2_EXPORT  ListCloudServiceResponseItemInfo
    : public ModelBase
{
public:
    ListCloudServiceResponseItemInfo();
    virtual ~ListCloudServiceResponseItemInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListCloudServiceResponseItemInfo members

    /// <summary>
    /// 云服务名称。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 云服务显示名称。
    /// </summary>

    std::string getShowName() const;
    bool showNameIsSet() const;
    void unsetshowName();
    void setShowName(const std::string& value);


protected:
    std::string name_;
    bool nameIsSet_;
    std::string showName_;
    bool showNameIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_SMN_V2_MODEL_ListCloudServiceResponseItemInfo_H_
