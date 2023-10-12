
#ifndef HUAWEICLOUD_SDK_DRS_V5_MODEL_DataProcessReq_H_
#define HUAWEICLOUD_SDK_DRS_V5_MODEL_DataProcessReq_H_


#include <huaweicloud/drs/v5/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/drs/v5/model/DataProcessInfo.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 指定任务数据加工规则请求体
/// </summary>
class HUAWEICLOUD_DRS_V5_EXPORT  DataProcessReq
    : public ModelBase
{
public:
    DataProcessReq();
    virtual ~DataProcessReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DataProcessReq members

    /// <summary>
    /// 指定任务数据加工规则请求体
    /// </summary>

    std::vector<DataProcessInfo>& getDataProcessInfo();
    bool dataProcessInfoIsSet() const;
    void unsetdataProcessInfo();
    void setDataProcessInfo(const std::vector<DataProcessInfo>& value);


protected:
    std::vector<DataProcessInfo> dataProcessInfo_;
    bool dataProcessInfoIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V5_MODEL_DataProcessReq_H_
