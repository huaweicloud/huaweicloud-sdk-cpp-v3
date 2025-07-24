
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_SubtaskcaseOverstockDto_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_SubtaskcaseOverstockDto_H_


#include <huaweicloud/cloudtest/v1/CloudtestExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <cpprest/details/basic_types.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  SubtaskcaseOverstockDto
    : public ModelBase
{
public:
    SubtaskcaseOverstockDto();
    virtual ~SubtaskcaseOverstockDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SubtaskcaseOverstockDto members

    /// <summary>
    /// 查询时间
    /// </summary>

    utility::datetime getDataTime() const;
    bool dataTimeIsSet() const;
    void unsetdataTime();
    void setDataTime(const utility::datetime& value);

    /// <summary>
    /// 执行机类型
    /// </summary>

    std::string getExecutorType() const;
    bool executorTypeIsSet() const;
    void unsetexecutorType();
    void setExecutorType(const std::string& value);

    /// <summary>
    /// UUID
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 执行机标签
    /// </summary>

    std::string getLabel() const;
    bool labelIsSet() const;
    void unsetlabel();
    void setLabel(const std::string& value);

    /// <summary>
    /// 执行机所属区域
    /// </summary>

    std::string getLocationId() const;
    bool locationIdIsSet() const;
    void unsetlocationId();
    void setLocationId(const std::string& value);

    /// <summary>
    /// 积压数量
    /// </summary>

    int32_t getSubtaskcaseOverstockCount() const;
    bool subtaskcaseOverstockCountIsSet() const;
    void unsetsubtaskcaseOverstockCount();
    void setSubtaskcaseOverstockCount(int32_t value);

    /// <summary>
    /// 服务ID
    /// </summary>

    std::string getTestServiceId() const;
    bool testServiceIdIsSet() const;
    void unsettestServiceId();
    void setTestServiceId(const std::string& value);


protected:
    utility::datetime dataTime_;
    bool dataTimeIsSet_;
    std::string executorType_;
    bool executorTypeIsSet_;
    std::string id_;
    bool idIsSet_;
    std::string label_;
    bool labelIsSet_;
    std::string locationId_;
    bool locationIdIsSet_;
    int32_t subtaskcaseOverstockCount_;
    bool subtaskcaseOverstockCountIsSet_;
    std::string testServiceId_;
    bool testServiceIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_SubtaskcaseOverstockDto_H_
