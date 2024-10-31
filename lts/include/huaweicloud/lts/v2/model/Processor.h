
#ifndef HUAWEICLOUD_SDK_LTS_V2_MODEL_Processor_H_
#define HUAWEICLOUD_SDK_LTS_V2_MODEL_Processor_H_


#include <huaweicloud/lts/v2/LtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/lts/v2/model/Detail.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_LTS_V2_EXPORT  Processor
    : public ModelBase
{
public:
    Processor();
    virtual ~Processor();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// Processor members

    /// <summary>
    /// 解析器类型 processor_regex 正则解析 processor_split_string 分词符 processor_json json解析器类型 processor_gotime自定义时间类型 processor_filter_regex日志过滤 processor_drop删除字段类型 processor_rename修改字段类型
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    Detail getDetail() const;
    bool detailIsSet() const;
    void unsetdetail();
    void setDetail(const Detail& value);


protected:
    std::string type_;
    bool typeIsSet_;
    Detail detail_;
    bool detailIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LTS_V2_MODEL_Processor_H_
