
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_PoolMetadataCreation_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_PoolMetadataCreation_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/modelarts/v1/model/PoolLabelsCreation.h>
#include <huaweicloud/modelarts/v1/model/PoolAnnotationsCreation.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 创建资源池时metadata信息。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  PoolMetadataCreation
    : public ModelBase
{
public:
    PoolMetadataCreation();
    virtual ~PoolMetadataCreation();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// PoolMetadataCreation members

    /// <summary>
    /// 
    /// </summary>

    PoolLabelsCreation getLabels() const;
    bool labelsIsSet() const;
    void unsetlabels();
    void setLabels(const PoolLabelsCreation& value);

    /// <summary>
    /// 
    /// </summary>

    PoolAnnotationsCreation getAnnotations() const;
    bool annotationsIsSet() const;
    void unsetannotations();
    void setAnnotations(const PoolAnnotationsCreation& value);


protected:
    PoolLabelsCreation labels_;
    bool labelsIsSet_;
    PoolAnnotationsCreation annotations_;
    bool annotationsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_PoolMetadataCreation_H_
