
#ifndef HUAWEICLOUD_SDK_DRS_V3_MODEL_DataTransformationInfo_H_
#define HUAWEICLOUD_SDK_DRS_V3_MODEL_DataTransformationInfo_H_


#include <huaweicloud/drs/v3/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/drs/v3/model/ConfigTransformationVo.h>
#include <huaweicloud/drs/v3/model/TransformationInfo.h>
#include <huaweicloud/drs/v3/model/DataTransformationObjectVO.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 数据加工详情
/// </summary>
class HUAWEICLOUD_DRS_V3_EXPORT  DataTransformationInfo
    : public ModelBase
{
public:
    DataTransformationInfo();
    virtual ~DataTransformationInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DataTransformationInfo members

    /// <summary>
    /// 
    /// </summary>

    TransformationInfo getTransformationInfo() const;
    bool transformationInfoIsSet() const;
    void unsettransformationInfo();
    void setTransformationInfo(const TransformationInfo& value);

    /// <summary>
    /// 
    /// </summary>

    ConfigTransformationVo getConfigTransformation() const;
    bool configTransformationIsSet() const;
    void unsetconfigTransformation();
    void setConfigTransformation(const ConfigTransformationVo& value);

    /// <summary>
    /// 数据加工对象。
    /// </summary>

    std::vector<DataTransformationObjectVO>& getDataTransformationObjectInfos();
    bool dataTransformationObjectInfosIsSet() const;
    void unsetdataTransformationObjectInfos();
    void setDataTransformationObjectInfos(const std::vector<DataTransformationObjectVO>& value);


protected:
    TransformationInfo transformationInfo_;
    bool transformationInfoIsSet_;
    ConfigTransformationVo configTransformation_;
    bool configTransformationIsSet_;
    std::vector<DataTransformationObjectVO> dataTransformationObjectInfos_;
    bool dataTransformationObjectInfosIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V3_MODEL_DataTransformationInfo_H_
