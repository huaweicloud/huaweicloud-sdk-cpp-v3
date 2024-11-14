
#ifndef HUAWEICLOUD_SDK_DDS_V3_MODEL_BatchUpgradeDatabaseVersionRequestBody_H_
#define HUAWEICLOUD_SDK_DDS_V3_MODEL_BatchUpgradeDatabaseVersionRequestBody_H_


#include <huaweicloud/dds/v3/DdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_DDS_V3_EXPORT  BatchUpgradeDatabaseVersionRequestBody
    : public ModelBase
{
public:
    BatchUpgradeDatabaseVersionRequestBody();
    virtual ~BatchUpgradeDatabaseVersionRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BatchUpgradeDatabaseVersionRequestBody members

    /// <summary>
    /// 指定需要升级数据库补丁版本的实例ID列表。 一次最多可传入10个实例ID。
    /// </summary>

    std::vector<std::string>& getInstanceIds();
    bool instanceIdsIsSet() const;
    void unsetinstanceIds();
    void setInstanceIds(const std::vector<std::string>& value);


protected:
    std::vector<std::string> instanceIds_;
    bool instanceIdsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DDS_V3_MODEL_BatchUpgradeDatabaseVersionRequestBody_H_
