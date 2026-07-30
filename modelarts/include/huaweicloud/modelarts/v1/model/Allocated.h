
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_Allocated_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_Allocated_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/modelarts/v1/model/Value.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 资源已分配量。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  Allocated
    : public ModelBase
{
public:
    Allocated();
    virtual ~Allocated();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// Allocated members

    /// <summary>
    /// 
    /// </summary>

    Value getValue() const;
    bool valueIsSet() const;
    void unsetvalue();
    void setValue(const Value& value);

    /// <summary>
    /// UTC时间，格式yyyy-MM-dd&#39;T&#39;HH:mm:ss&#39;Z&#39;。
    /// </summary>

    std::string getTimestamp() const;
    bool timestampIsSet() const;
    void unsettimestamp();
    void setTimestamp(const std::string& value);

    /// <summary>
    /// 统计间隔，1s表示1秒，1m表示1分钟，1h为1小时。
    /// </summary>

    std::string getWindow() const;
    bool windowIsSet() const;
    void unsetwindow();
    void setWindow(const std::string& value);


protected:
    Value value_;
    bool valueIsSet_;
    std::string timestamp_;
    bool timestampIsSet_;
    std::string window_;
    bool windowIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_Allocated_H_
