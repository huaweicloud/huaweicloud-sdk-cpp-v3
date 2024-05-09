
#ifndef HUAWEICLOUD_SDK_DRS_V3_MODEL_CreateObjectCompareJobReq_H_
#define HUAWEICLOUD_SDK_DRS_V3_MODEL_CreateObjectCompareJobReq_H_


#include <huaweicloud/drs/v3/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 创建对象级对比任务请求。
/// </summary>
class HUAWEICLOUD_DRS_V3_EXPORT  CreateObjectCompareJobReq
    : public ModelBase
{
public:
    CreateObjectCompareJobReq();
    virtual ~CreateObjectCompareJobReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateObjectCompareJobReq members

    /// <summary>
    /// 对比任务线程数量，当前仅cloudDataGuard-cassandra和cloudDataGuard-gausscassandra-to-gausscassandra链路支持。
    /// </summary>

    int32_t getCompareTaskNum() const;
    bool compareTaskNumIsSet() const;
    void unsetcompareTaskNum();
    void setCompareTaskNum(int32_t value);


protected:
    int32_t compareTaskNum_;
    bool compareTaskNumIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V3_MODEL_CreateObjectCompareJobReq_H_
