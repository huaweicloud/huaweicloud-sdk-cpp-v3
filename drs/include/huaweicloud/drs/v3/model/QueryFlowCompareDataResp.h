
#ifndef HUAWEICLOUD_SDK_DRS_V3_MODEL_QueryFlowCompareDataResp_H_
#define HUAWEICLOUD_SDK_DRS_V3_MODEL_QueryFlowCompareDataResp_H_


#include <huaweicloud/drs/v3/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/drs/v3/model/StructDetailVO.h>
#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 灾备初始化对象详情信息
/// </summary>
class HUAWEICLOUD_DRS_V3_EXPORT  QueryFlowCompareDataResp
    : public ModelBase
{
public:
    QueryFlowCompareDataResp();
    virtual ~QueryFlowCompareDataResp();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// QueryFlowCompareDataResp members

    /// <summary>
    /// 任务总数
    /// </summary>

    int64_t getTotalRecord() const;
    bool totalRecordIsSet() const;
    void unsettotalRecord();
    void setTotalRecord(int64_t value);

    /// <summary>
    /// 数据生成时间
    /// </summary>

    std::string getCreateTime() const;
    bool createTimeIsSet() const;
    void unsetcreateTime();
    void setCreateTime(const std::string& value);

    /// <summary>
    /// 对比结果
    /// </summary>

    std::vector<StructDetailVO>& getList();
    bool listIsSet() const;
    void unsetlist();
    void setList(const std::vector<StructDetailVO>& value);


protected:
    int64_t totalRecord_;
    bool totalRecordIsSet_;
    std::string createTime_;
    bool createTimeIsSet_;
    std::vector<StructDetailVO> list_;
    bool listIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V3_MODEL_QueryFlowCompareDataResp_H_
