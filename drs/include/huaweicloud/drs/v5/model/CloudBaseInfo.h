
#ifndef HUAWEICLOUD_SDK_DRS_V5_MODEL_CloudBaseInfo_H_
#define HUAWEICLOUD_SDK_DRS_V5_MODEL_CloudBaseInfo_H_

#include <huaweicloud/drs/v5/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 数据库实例所在Region，项目等信息，当数据库实例类型为ecs（华为云ECS自建数据库），cloud（华为云数据库）时为必填项。
/// </summary>
class HUAWEICLOUD_DRS_V5_EXPORT  CloudBaseInfo
    : public ModelBase
{
public:
    CloudBaseInfo();
    virtual ~CloudBaseInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// CloudBaseInfo members

    /// <summary>
    /// 区域ID，当数据库实例类型为ecs（华为云ECS自建数据库），cloud（华为云数据库）时为必填项。获取方法请参见地区和终端节点。 注意：当该Region下存在子项目时，Region ID为区域项目ID与子项目ID，由“_”下划线拼接，例如：cn-north-4_abc。
    /// </summary>

    std::string getRegion() const;
    bool regionIsSet() const;
    void unsetregion();
    void setRegion(const std::string& value);

    /// <summary>
    /// 租户在某一Region下的Project ID。 获取方法请参见获取项目ID。
    /// </summary>

    std::string getProjectId() const;
    bool projectIdIsSet() const;
    void unsetprojectId();
    void setProjectId(const std::string& value);

    /// <summary>
    /// 数据库所在可用分区（AZ）名称。
    /// </summary>

    std::string getAzCode() const;
    bool azCodeIsSet() const;
    void unsetazCode();
    void setAzCode(const std::string& value);


protected:
    std::string region_;
    bool regionIsSet_;
    std::string projectId_;
    bool projectIdIsSet_;
    std::string azCode_;
    bool azCodeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V5_MODEL_CloudBaseInfo_H_
