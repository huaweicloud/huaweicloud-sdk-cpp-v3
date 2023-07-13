
#ifndef HUAWEICLOUD_SDK_LTS_V2_MODEL_GetQuerySearchCriteriasBody_H_
#define HUAWEICLOUD_SDK_LTS_V2_MODEL_GetQuerySearchCriteriasBody_H_

#include <huaweicloud/lts/v2/LtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

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
class HUAWEICLOUD_LTS_V2_EXPORT  GetQuerySearchCriteriasBody
    : public ModelBase
{
public:
    GetQuerySearchCriteriasBody();
    virtual ~GetQuerySearchCriteriasBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// GetQuerySearchCriteriasBody members

    /// <summary>
    /// 快速查询字段
    /// </summary>

    std::string getCriteria() const;
    bool criteriaIsSet() const;
    void unsetcriteria();
    void setCriteria(const std::string& value);

    /// <summary>
    /// 快速查询名称
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 快速查询id
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 快速查询类型： 原始日志：ORIGINALLOG 可视化日志: VISUALIZATION
    /// </summary>

    std::string getSearchType() const;
    bool searchTypeIsSet() const;
    void unsetsearchType();
    void setSearchType(const std::string& value);


protected:
    std::string criteria_;
    bool criteriaIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string id_;
    bool idIsSet_;
    std::string searchType_;
    bool searchTypeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LTS_V2_MODEL_GetQuerySearchCriteriasBody_H_
