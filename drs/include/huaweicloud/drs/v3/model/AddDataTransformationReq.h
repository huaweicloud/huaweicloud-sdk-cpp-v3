
#ifndef HUAWEICLOUD_SDK_DRS_V3_MODEL_AddDataTransformationReq_H_
#define HUAWEICLOUD_SDK_DRS_V3_MODEL_AddDataTransformationReq_H_


#include <huaweicloud/drs/v3/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/drs/v3/model/CreateDataCompareDatabaseObject.h>
#include <huaweicloud/drs/v3/model/CreateDataCompareTransformationInfo.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 数据加工规则
/// </summary>
class HUAWEICLOUD_DRS_V3_EXPORT  AddDataTransformationReq
    : public ModelBase
{
public:
    AddDataTransformationReq();
    virtual ~AddDataTransformationReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AddDataTransformationReq members

    /// <summary>
    /// 对象信息。
    /// </summary>

    std::vector<CreateDataCompareDatabaseObject>& getObjectInfo();
    bool objectInfoIsSet() const;
    void unsetobjectInfo();
    void setObjectInfo(const std::vector<CreateDataCompareDatabaseObject>& value);

    /// <summary>
    /// 
    /// </summary>

    CreateDataCompareTransformationInfo getTransformationInfo() const;
    bool transformationInfoIsSet() const;
    void unsettransformationInfo();
    void setTransformationInfo(const CreateDataCompareTransformationInfo& value);


protected:
    std::vector<CreateDataCompareDatabaseObject> objectInfo_;
    bool objectInfoIsSet_;
    CreateDataCompareTransformationInfo transformationInfo_;
    bool transformationInfoIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V3_MODEL_AddDataTransformationReq_H_
