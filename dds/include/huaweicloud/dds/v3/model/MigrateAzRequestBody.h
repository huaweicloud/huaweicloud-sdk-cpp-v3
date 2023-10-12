
#ifndef HUAWEICLOUD_SDK_DDS_V3_MODEL_MigrateAzRequestBody_H_
#define HUAWEICLOUD_SDK_DDS_V3_MODEL_MigrateAzRequestBody_H_


#include <huaweicloud/dds/v3/DdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

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
class HUAWEICLOUD_DDS_V3_EXPORT  MigrateAzRequestBody
    : public ModelBase
{
public:
    MigrateAzRequestBody();
    virtual ~MigrateAzRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// MigrateAzRequestBody members

    /// <summary>
    /// 迁移到的目标单az或者多az，请参见[地区和终端节点](https://developer.huaweicloud.com/endpoint)。
    /// </summary>

    std::string getTargetAzs() const;
    bool targetAzsIsSet() const;
    void unsettargetAzs();
    void setTargetAzs(const std::string& value);


protected:
    std::string targetAzs_;
    bool targetAzsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DDS_V3_MODEL_MigrateAzRequestBody_H_
