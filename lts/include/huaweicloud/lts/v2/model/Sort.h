
#ifndef HUAWEICLOUD_SDK_LTS_V2_MODEL_Sort_H_
#define HUAWEICLOUD_SDK_LTS_V2_MODEL_Sort_H_


#include <huaweicloud/lts/v2/LtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

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
class HUAWEICLOUD_LTS_V2_EXPORT  Sort
    : public ModelBase
{
public:
    Sort();
    virtual ~Sort();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// Sort members

    /// <summary>
    /// 排序字段
    /// </summary>

    std::vector<std::string>& getOrderBy();
    bool orderByIsSet() const;
    void unsetorderBy();
    void setOrderBy(const std::vector<std::string>& value);

    /// <summary>
    /// 排序顺序
    /// </summary>

    std::string getOrder() const;
    bool orderIsSet() const;
    void unsetorder();
    void setOrder(const std::string& value);


protected:
    std::vector<std::string> orderBy_;
    bool orderByIsSet_;
    std::string order_;
    bool orderIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LTS_V2_MODEL_Sort_H_
