
#ifndef HUAWEICLOUD_SDK_DRS_V5_MODEL_ShowProgressDataResponse_H_
#define HUAWEICLOUD_SDK_DRS_V5_MODEL_ShowProgressDataResponse_H_

#include <huaweicloud/drs/v5/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/drs/v5/model/FlowCompareData.h>
#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_DRS_V5_EXPORT  ShowProgressDataResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowProgressDataResponse();
    virtual ~ShowProgressDataResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ShowProgressDataResponse members

    /// <summary>
    /// 总数。
    /// </summary>

    int64_t getCount() const;
    bool countIsSet() const;
    void unsetcount();
    void setCount(int64_t value);

    /// <summary>
    /// 数据生成时间，UTC时间，例如：2020-09-01T18:50:20.200Z
    /// </summary>

    std::string getCreateTime() const;
    bool createTimeIsSet() const;
    void unsetcreateTime();
    void setCreateTime(const std::string& value);

    /// <summary>
    /// 对比结果。
    /// </summary>

    std::vector<FlowCompareData>& getFlowCompareData();
    bool flowCompareDataIsSet() const;
    void unsetflowCompareData();
    void setFlowCompareData(const std::vector<FlowCompareData>& value);


protected:
    int64_t count_;
    bool countIsSet_;
    std::string createTime_;
    bool createTimeIsSet_;
    std::vector<FlowCompareData> flowCompareData_;
    bool flowCompareDataIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V5_MODEL_ShowProgressDataResponse_H_
