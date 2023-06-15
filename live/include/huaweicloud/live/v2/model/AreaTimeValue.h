
#ifndef HUAWEICLOUD_SDK_LIVE_V2_MODEL_AreaTimeValue_H_
#define HUAWEICLOUD_SDK_LIVE_V2_MODEL_AreaTimeValue_H_

#include <huaweicloud/live/v2/LiveExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/live/v2/model/TimeValue.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_LIVE_V2_EXPORT  AreaTimeValue
    : public ModelBase
{
public:
    AreaTimeValue();
    virtual ~AreaTimeValue();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// AreaTimeValue members

    /// <summary>
    /// 各个大区下的具体省份、区域、国家的名称。  中国内地返回结果为省份/直辖市的中文名称，比如：广东、上海； 海外大区下的地区/国家对应关系请参考[地区/国家代码对照表](live_03_0049.xml)。 
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 当前时间返回指定指标的值
    /// </summary>

    std::vector<TimeValue>& getData();
    bool dataIsSet() const;
    void unsetdata();
    void setData(const std::vector<TimeValue>& value);


protected:
    std::string name_;
    bool nameIsSet_;
    std::vector<TimeValue> data_;
    bool dataIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LIVE_V2_MODEL_AreaTimeValue_H_
