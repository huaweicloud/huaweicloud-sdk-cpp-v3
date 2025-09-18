
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_BatchDeleteIterationsV4RequestBody_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_BatchDeleteIterationsV4RequestBody_H_


#include <huaweicloud/projectman/v4/ProjectManExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  BatchDeleteIterationsV4RequestBody
    : public ModelBase
{
public:
    BatchDeleteIterationsV4RequestBody();
    virtual ~BatchDeleteIterationsV4RequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BatchDeleteIterationsV4RequestBody members

    /// <summary>
    /// 迭代的id
    /// </summary>

    std::vector<int32_t>& getIterationIds();
    bool iterationIdsIsSet() const;
    void unsetiterationIds();
    void setIterationIds(std::vector<int32_t> value);


protected:
    std::vector<int32_t> iterationIds_;
    bool iterationIdsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_BatchDeleteIterationsV4RequestBody_H_
