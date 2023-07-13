
#ifndef HUAWEICLOUD_SDK_CFW_V1_MODEL_HttpQueryCfwFlowLogsResponseDTO_data_H_
#define HUAWEICLOUD_SDK_CFW_V1_MODEL_HttpQueryCfwFlowLogsResponseDTO_data_H_

#include <huaweicloud/cfw/v1/CfwExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cfw/v1/model/HttpQueryCfwFlowLogsResponseDTO_data_records.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 查询流日志返回值
/// </summary>
class HUAWEICLOUD_CFW_V1_EXPORT  HttpQueryCfwFlowLogsResponseDTO_data
    : public ModelBase
{
public:
    HttpQueryCfwFlowLogsResponseDTO_data();
    virtual ~HttpQueryCfwFlowLogsResponseDTO_data();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// HttpQueryCfwFlowLogsResponseDTO_data members

    /// <summary>
    /// 返回数量
    /// </summary>

    int32_t getTotal() const;
    bool totalIsSet() const;
    void unsettotal();
    void setTotal(int32_t value);

    /// <summary>
    /// 每页显示个数
    /// </summary>

    int32_t getLimit() const;
    bool limitIsSet() const;
    void unsetlimit();
    void setLimit(int32_t value);

    /// <summary>
    /// 记录
    /// </summary>

    std::vector<HttpQueryCfwFlowLogsResponseDTO_data_records>& getRecords();
    bool recordsIsSet() const;
    void unsetrecords();
    void setRecords(const std::vector<HttpQueryCfwFlowLogsResponseDTO_data_records>& value);


protected:
    int32_t total_;
    bool totalIsSet_;
    int32_t limit_;
    bool limitIsSet_;
    std::vector<HttpQueryCfwFlowLogsResponseDTO_data_records> records_;
    bool recordsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CFW_V1_MODEL_HttpQueryCfwFlowLogsResponseDTO_data_H_
