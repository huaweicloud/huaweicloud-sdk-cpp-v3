
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_PauseStarRocksDataReplication_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_PauseStarRocksDataReplication_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  PauseStarRocksDataReplication
    : public ModelBase
{
public:
    PauseStarRocksDataReplication();
    virtual ~PauseStarRocksDataReplication();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// PauseStarRocksDataReplication members

    /// <summary>
    /// 同步任务名。字符长度限制3~128位，仅支持英文大小写字母、数字以及下划线。
    /// </summary>

    std::string getTaskName() const;
    bool taskNameIsSet() const;
    void unsettaskName();
    void setTaskName(const std::string& value);


protected:
    std::string taskName_;
    bool taskNameIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_PauseStarRocksDataReplication_H_
