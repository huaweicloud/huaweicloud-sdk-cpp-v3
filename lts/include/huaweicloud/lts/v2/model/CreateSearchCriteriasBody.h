
#ifndef HUAWEICLOUD_SDK_LTS_V2_MODEL_CreateSearchCriteriasBody_H_
#define HUAWEICLOUD_SDK_LTS_V2_MODEL_CreateSearchCriteriasBody_H_

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
class HUAWEICLOUD_LTS_V2_EXPORT  CreateSearchCriteriasBody
    : public ModelBase
{
public:
    CreateSearchCriteriasBody();
    virtual ~CreateSearchCriteriasBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// CreateSearchCriteriasBody members

    /// <summary>
    /// 快速查询字段
    /// </summary>

    std::string getCriteria() const;
    bool criteriaIsSet() const;
    void unsetcriteria();
    void setCriteria(const std::string& value);

    /// <summary>
    /// 企业项目id
    /// </summary>

    std::string getEpsId() const;
    bool epsIdIsSet() const;
    void unsetepsId();
    void setEpsId(const std::string& value);

    /// <summary>
    /// 创建快速查询名称
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 查询类型 原始日志：ORIGINALLOG 可视化日志: VISUALIZATION
    /// </summary>

    std::string getSearchType() const;
    bool searchTypeIsSet() const;
    void unsetsearchType();
    void setSearchType(const std::string& value);


protected:
    std::string criteria_;
    bool criteriaIsSet_;
    std::string epsId_;
    bool epsIdIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string searchType_;
    bool searchTypeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LTS_V2_MODEL_CreateSearchCriteriasBody_H_
