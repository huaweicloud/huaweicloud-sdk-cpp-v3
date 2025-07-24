
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_SystemConfig_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_SystemConfig_H_


#include <huaweicloud/cloudtest/v1/CloudtestExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  SystemConfig
    : public ModelBase
{
public:
    SystemConfig();
    virtual ~SystemConfig();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SystemConfig members

    /// <summary>
    /// 配置项主键
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 系统配置名称
    /// </summary>

    std::string getKey() const;
    bool keyIsSet() const;
    void unsetkey();
    void setKey(const std::string& value);

    /// <summary>
    /// 系统配置状态
    /// </summary>

    std::string getValue() const;
    bool valueIsSet() const;
    void unsetvalue();
    void setValue(const std::string& value);

    /// <summary>
    /// 描述
    /// </summary>

    std::string getRemark() const;
    bool remarkIsSet() const;
    void unsetremark();
    void setRemark(const std::string& value);

    /// <summary>
    /// region_id
    /// </summary>

    std::string getRegionId() const;
    bool regionIdIsSet() const;
    void unsetregionId();
    void setRegionId(const std::string& value);

    /// <summary>
    /// 项目ID
    /// </summary>

    std::string getProjectId() const;
    bool projectIdIsSet() const;
    void unsetprojectId();
    void setProjectId(const std::string& value);

    /// <summary>
    /// 更新时间
    /// </summary>

    std::string getUpdateTime() const;
    bool updateTimeIsSet() const;
    void unsetupdateTime();
    void setUpdateTime(const std::string& value);

    /// <summary>
    /// 更新人名称
    /// </summary>

    std::string getUpdateName() const;
    bool updateNameIsSet() const;
    void unsetupdateName();
    void setUpdateName(const std::string& value);

    /// <summary>
    /// 更新人编号
    /// </summary>

    std::string getUpdateNum() const;
    bool updateNumIsSet() const;
    void unsetupdateNum();
    void setUpdateNum(const std::string& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string key_;
    bool keyIsSet_;
    std::string value_;
    bool valueIsSet_;
    std::string remark_;
    bool remarkIsSet_;
    std::string regionId_;
    bool regionIdIsSet_;
    std::string projectId_;
    bool projectIdIsSet_;
    std::string updateTime_;
    bool updateTimeIsSet_;
    std::string updateName_;
    bool updateNameIsSet_;
    std::string updateNum_;
    bool updateNumIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_SystemConfig_H_
