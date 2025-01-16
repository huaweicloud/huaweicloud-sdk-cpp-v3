
#ifndef HUAWEICLOUD_SDK_ECS_V2_MODEL_ListServerAzInfo_H_
#define HUAWEICLOUD_SDK_ECS_V2_MODEL_ListServerAzInfo_H_


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
/// 
/// </summary>
class HUAWEICLOUD_ECS_V2_EXPORT  ListServerAzInfo
    : public ModelBase
{
public:
    ListServerAzInfo();
    virtual ~ListServerAzInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListServerAzInfo members

    /// <summary>
    /// 可用区ID
    /// </summary>

    std::string getAvailabilityZoneId() const;
    bool availabilityZoneIdIsSet() const;
    void unsetavailabilityZoneId();
    void setAvailabilityZoneId(const std::string& value);

    /// <summary>
    /// 可用区类型
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// 可用区模式
    /// </summary>

    std::string getMode() const;
    bool modeIsSet() const;
    void unsetmode();
    void setMode(const std::string& value);

    /// <summary>
    /// 公网边界组，网络eip类别标识，用于查找az可用的eip池
    /// </summary>

    std::string getPublicBorderGroup() const;
    bool publicBorderGroupIsSet() const;
    void unsetpublicBorderGroup();
    void setPublicBorderGroup(const std::string& value);

    /// <summary>
    /// 可用区别名
    /// </summary>

    std::string getAlias() const;
    bool aliasIsSet() const;
    void unsetalias();
    void setAlias(const std::string& value);

    /// <summary>
    /// 可用区所属的AZGroup列表
    /// </summary>

    std::vector<std::string>& getAzGroupIds();
    bool azGroupIdsIsSet() const;
    void unsetazGroupIds();
    void setAzGroupIds(const std::vector<std::string>& value);

    /// <summary>
    /// 可用区类型对应的子类型
    /// </summary>

    int32_t getCategory() const;
    bool categoryIsSet() const;
    void unsetcategory();
    void setCategory(int32_t value);


protected:
    std::string availabilityZoneId_;
    bool availabilityZoneIdIsSet_;
    std::string type_;
    bool typeIsSet_;
    std::string mode_;
    bool modeIsSet_;
    std::string publicBorderGroup_;
    bool publicBorderGroupIsSet_;
    std::string alias_;
    bool aliasIsSet_;
    std::vector<std::string> azGroupIds_;
    bool azGroupIdsIsSet_;
    int32_t category_;
    bool categoryIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ECS_V2_MODEL_ListServerAzInfo_H_
