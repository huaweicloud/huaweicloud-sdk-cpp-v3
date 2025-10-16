
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_PublicationTableFilterInfoResponse_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_PublicationTableFilterInfoResponse_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>
#include <huaweicloud/rds/v3/model/PublicationTableFilterInfoResponse.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 表筛选器。
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  PublicationTableFilterInfoResponse
    : public ModelBase
{
public:
    PublicationTableFilterInfoResponse();
    virtual ~PublicationTableFilterInfoResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// PublicationTableFilterInfoResponse members

    /// <summary>
    /// 筛选关系。  为空时表示当前为最下级筛选器，不为空时表示当前项还有下级筛选器。
    /// </summary>

    std::string getRelation() const;
    bool relationIsSet() const;
    void unsetrelation();
    void setRelation(const std::string& value);

    /// <summary>
    /// 筛选字段。
    /// </summary>

    std::string getColumn() const;
    bool columnIsSet() const;
    void unsetcolumn();
    void setColumn(const std::string& value);

    /// <summary>
    /// 筛选条件。
    /// </summary>

    std::string getCondition() const;
    bool conditionIsSet() const;
    void unsetcondition();
    void setCondition(const std::string& value);

    /// <summary>
    /// 筛选值。
    /// </summary>

    std::string getValue() const;
    bool valueIsSet() const;
    void unsetvalue();
    void setValue(const std::string& value);

    /// <summary>
    /// 下级筛选器。
    /// </summary>

    std::vector<PublicationTableFilterInfoResponse>& getFilters();
    bool filtersIsSet() const;
    void unsetfilters();
    void setFilters(const std::vector<PublicationTableFilterInfoResponse>& value);


protected:
    std::string relation_;
    bool relationIsSet_;
    std::string column_;
    bool columnIsSet_;
    std::string condition_;
    bool conditionIsSet_;
    std::string value_;
    bool valueIsSet_;
    std::vector<PublicationTableFilterInfoResponse>* filters_;
    bool filtersIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_PublicationTableFilterInfoResponse_H_
