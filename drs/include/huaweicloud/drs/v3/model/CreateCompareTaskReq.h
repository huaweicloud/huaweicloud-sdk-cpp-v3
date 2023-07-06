
#ifndef HUAWEICLOUD_SDK_DRS_V3_MODEL_CreateCompareTaskReq_H_
#define HUAWEICLOUD_SDK_DRS_V3_MODEL_CreateCompareTaskReq_H_

#include <huaweicloud/drs/v3/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/drs/v3/model/CreateDataLevelCompareReq.h>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_DRS_V3_EXPORT  CreateCompareTaskReq
    : public ModelBase
{
public:
    CreateCompareTaskReq();
    virtual ~CreateCompareTaskReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// CreateCompareTaskReq members

    /// <summary>
    /// 任务id。
    /// </summary>

    std::string getJobId() const;
    bool jobIdIsSet() const;
    void unsetjobId();
    void setJobId(const std::string& value);

    /// <summary>
    /// 对象级对比类型，取值为空代表不创建对象级对比。object_level_compare_type和data_level_compare_info都为空时，只查询已创建的对比任务列表。
    /// </summary>

    std::string getObjectLevelCompareType() const;
    bool objectLevelCompareTypeIsSet() const;
    void unsetobjectLevelCompareType();
    void setObjectLevelCompareType(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    CreateDataLevelCompareReq getDataLevelCompareInfo() const;
    bool dataLevelCompareInfoIsSet() const;
    void unsetdataLevelCompareInfo();
    void setDataLevelCompareInfo(const CreateDataLevelCompareReq& value);


protected:
    std::string jobId_;
    bool jobIdIsSet_;
    std::string objectLevelCompareType_;
    bool objectLevelCompareTypeIsSet_;
    CreateDataLevelCompareReq dataLevelCompareInfo_;
    bool dataLevelCompareInfoIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V3_MODEL_CreateCompareTaskReq_H_
