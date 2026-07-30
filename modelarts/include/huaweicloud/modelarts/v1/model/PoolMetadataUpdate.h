
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_PoolMetadataUpdate_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_PoolMetadataUpdate_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/modelarts/v1/model/PoolMetadataUpdate_annotations.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 资源池元数据更新信息。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  PoolMetadataUpdate
    : public ModelBase
{
public:
    PoolMetadataUpdate();
    virtual ~PoolMetadataUpdate();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// PoolMetadataUpdate members

    /// <summary>
    /// 
    /// </summary>

    PoolMetadataUpdate_annotations getAnnotations() const;
    bool annotationsIsSet() const;
    void unsetannotations();
    void setAnnotations(const PoolMetadataUpdate_annotations& value);


protected:
    PoolMetadataUpdate_annotations annotations_;
    bool annotationsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_PoolMetadataUpdate_H_
