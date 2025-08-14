
#include <huaweicloud/identitycenter/v1/IdentityCenterMeta.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenter {
namespace V1 {

using namespace HuaweiCloud::Sdk::Core::Http;

HttpRequestDef IdentityCenterMeta::genRequestDefForCreateAccountAssignment() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXSecurityToken;
    reqDefBuilder.withRequestField(headerParamXSecurityToken
                  .withName("XSecurityToken")
                  .withJsonTag("X-Security-Token")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef IdentityCenterMeta::genRequestDefForDeleteAccountAssignment() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXSecurityToken;
    reqDefBuilder.withRequestField(headerParamXSecurityToken
                  .withName("XSecurityToken")
                  .withJsonTag("X-Security-Token")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef IdentityCenterMeta::genRequestDefForDescribeAccountAssignmentCreationStatus() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXSecurityToken;
    reqDefBuilder.withRequestField(headerParamXSecurityToken
                  .withName("XSecurityToken")
                  .withJsonTag("X-Security-Token")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef IdentityCenterMeta::genRequestDefForDescribeAccountAssignmentDeletionStatus() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXSecurityToken;
    reqDefBuilder.withRequestField(headerParamXSecurityToken
                  .withName("XSecurityToken")
                  .withJsonTag("X-Security-Token")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef IdentityCenterMeta::genRequestDefForDisassociateProfile() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXSecurityToken;
    reqDefBuilder.withRequestField(headerParamXSecurityToken
                  .withName("XSecurityToken")
                  .withJsonTag("X-Security-Token")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef IdentityCenterMeta::genRequestDefForListAccountAssignmentCreationStatus() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Status")
                  .withJsonTag("status")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Marker")
                  .withJsonTag("marker")
                  .withLocationType(Query_));
    FieldDef headerParamXSecurityToken;
    reqDefBuilder.withRequestField(headerParamXSecurityToken
                  .withName("XSecurityToken")
                  .withJsonTag("X-Security-Token")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef IdentityCenterMeta::genRequestDefForListAccountAssignmentDeletionStatus() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Status")
                  .withJsonTag("status")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Marker")
                  .withJsonTag("marker")
                  .withLocationType(Query_));
    FieldDef headerParamXSecurityToken;
    reqDefBuilder.withRequestField(headerParamXSecurityToken
                  .withName("XSecurityToken")
                  .withJsonTag("X-Security-Token")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef IdentityCenterMeta::genRequestDefForListAccountAssignments() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Marker")
                  .withJsonTag("marker")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("AccountId")
                  .withJsonTag("account_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("PermissionSetId")
                  .withJsonTag("permission_set_id")
                  .withLocationType(Query_));
    FieldDef headerParamXSecurityToken;
    reqDefBuilder.withRequestField(headerParamXSecurityToken
                  .withName("XSecurityToken")
                  .withJsonTag("X-Security-Token")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef IdentityCenterMeta::genRequestDefForListAccountAssignmentsForPrincipal() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("PrincipalId")
                  .withJsonTag("principal_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("PrincipalType")
                  .withJsonTag("principal_type")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Marker")
                  .withJsonTag("marker")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("AccountId")
                  .withJsonTag("account_id")
                  .withLocationType(Query_));
    FieldDef headerParamXSecurityToken;
    reqDefBuilder.withRequestField(headerParamXSecurityToken
                  .withName("XSecurityToken")
                  .withJsonTag("X-Security-Token")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef IdentityCenterMeta::genRequestDefForCreateApplicationInstance() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXSecurityToken;
    reqDefBuilder.withRequestField(headerParamXSecurityToken
                  .withName("XSecurityToken")
                  .withJsonTag("X-Security-Token")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef IdentityCenterMeta::genRequestDefForDeleteApplicationInstance() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXSecurityToken;
    reqDefBuilder.withRequestField(headerParamXSecurityToken
                  .withName("XSecurityToken")
                  .withJsonTag("X-Security-Token")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef IdentityCenterMeta::genRequestDefForDeleteProfile() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXSecurityToken;
    reqDefBuilder.withRequestField(headerParamXSecurityToken
                  .withName("XSecurityToken")
                  .withJsonTag("X-Security-Token")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef IdentityCenterMeta::genRequestDefForDescribeApplication() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXSecurityToken;
    reqDefBuilder.withRequestField(headerParamXSecurityToken
                  .withName("XSecurityToken")
                  .withJsonTag("X-Security-Token")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef IdentityCenterMeta::genRequestDefForDescribeApplicationProvider() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXSecurityToken;
    reqDefBuilder.withRequestField(headerParamXSecurityToken
                  .withName("XSecurityToken")
                  .withJsonTag("X-Security-Token")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef IdentityCenterMeta::genRequestDefForGetApplicationAssignmentConfiguration() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXSecurityToken;
    reqDefBuilder.withRequestField(headerParamXSecurityToken
                  .withName("XSecurityToken")
                  .withJsonTag("X-Security-Token")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef IdentityCenterMeta::genRequestDefForGetApplicationInstance() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXSecurityToken;
    reqDefBuilder.withRequestField(headerParamXSecurityToken
                  .withName("XSecurityToken")
                  .withJsonTag("X-Security-Token")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef IdentityCenterMeta::genRequestDefForImportApplicationInstanceServiceProviderMetadata() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXSecurityToken;
    reqDefBuilder.withRequestField(headerParamXSecurityToken
                  .withName("XSecurityToken")
                  .withJsonTag("X-Security-Token")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef IdentityCenterMeta::genRequestDefForListApplicationInstances() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Marker")
                  .withJsonTag("marker")
                  .withLocationType(Query_));
    FieldDef headerParamXSecurityToken;
    reqDefBuilder.withRequestField(headerParamXSecurityToken
                  .withName("XSecurityToken")
                  .withJsonTag("X-Security-Token")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef IdentityCenterMeta::genRequestDefForListApplicationProviders() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Marker")
                  .withJsonTag("marker")
                  .withLocationType(Query_));
    FieldDef headerParamXSecurityToken;
    reqDefBuilder.withRequestField(headerParamXSecurityToken
                  .withName("XSecurityToken")
                  .withJsonTag("X-Security-Token")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef IdentityCenterMeta::genRequestDefForListApplicationTemplates() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("ApplicationId")
                  .withJsonTag("application_id")
                  .withLocationType(Query_));
    FieldDef headerParamXSecurityToken;
    reqDefBuilder.withRequestField(headerParamXSecurityToken
                  .withName("XSecurityToken")
                  .withJsonTag("X-Security-Token")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef IdentityCenterMeta::genRequestDefForListApplications() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Marker")
                  .withJsonTag("marker")
                  .withLocationType(Query_));
    FieldDef headerParamXSecurityToken;
    reqDefBuilder.withRequestField(headerParamXSecurityToken
                  .withName("XSecurityToken")
                  .withJsonTag("X-Security-Token")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef IdentityCenterMeta::genRequestDefForListCatalogApplications() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Marker")
                  .withJsonTag("marker")
                  .withLocationType(Query_));
    FieldDef headerParamXSecurityToken;
    reqDefBuilder.withRequestField(headerParamXSecurityToken
                  .withName("XSecurityToken")
                  .withJsonTag("X-Security-Token")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef IdentityCenterMeta::genRequestDefForListProfiles() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXSecurityToken;
    reqDefBuilder.withRequestField(headerParamXSecurityToken
                  .withName("XSecurityToken")
                  .withJsonTag("X-Security-Token")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef IdentityCenterMeta::genRequestDefForUpdateApplicationInstanceDisplayData() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXSecurityToken;
    reqDefBuilder.withRequestField(headerParamXSecurityToken
                  .withName("XSecurityToken")
                  .withJsonTag("X-Security-Token")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef IdentityCenterMeta::genRequestDefForUpdateApplicationInstanceResponseConfiguration() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXSecurityToken;
    reqDefBuilder.withRequestField(headerParamXSecurityToken
                  .withName("XSecurityToken")
                  .withJsonTag("X-Security-Token")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef IdentityCenterMeta::genRequestDefForUpdateApplicationInstanceResponseSchemaConfiguration() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXSecurityToken;
    reqDefBuilder.withRequestField(headerParamXSecurityToken
                  .withName("XSecurityToken")
                  .withJsonTag("X-Security-Token")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef IdentityCenterMeta::genRequestDefForUpdateApplicationInstanceSecurityConfiguration() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXSecurityToken;
    reqDefBuilder.withRequestField(headerParamXSecurityToken
                  .withName("XSecurityToken")
                  .withJsonTag("X-Security-Token")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef IdentityCenterMeta::genRequestDefForUpdateApplicationInstanceServiceProviderConfiguration() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXSecurityToken;
    reqDefBuilder.withRequestField(headerParamXSecurityToken
                  .withName("XSecurityToken")
                  .withJsonTag("X-Security-Token")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef IdentityCenterMeta::genRequestDefForUpdateApplicationInstanceStatus() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXSecurityToken;
    reqDefBuilder.withRequestField(headerParamXSecurityToken
                  .withName("XSecurityToken")
                  .withJsonTag("X-Security-Token")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef IdentityCenterMeta::genRequestDefForCreateApplicationAssignment() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXSecurityToken;
    reqDefBuilder.withRequestField(headerParamXSecurityToken
                  .withName("XSecurityToken")
                  .withJsonTag("X-Security-Token")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef IdentityCenterMeta::genRequestDefForDeleteApplicationAssignment() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXSecurityToken;
    reqDefBuilder.withRequestField(headerParamXSecurityToken
                  .withName("XSecurityToken")
                  .withJsonTag("X-Security-Token")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef IdentityCenterMeta::genRequestDefForListApplicationAssignments() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Marker")
                  .withJsonTag("marker")
                  .withLocationType(Query_));
    FieldDef headerParamXSecurityToken;
    reqDefBuilder.withRequestField(headerParamXSecurityToken
                  .withName("XSecurityToken")
                  .withJsonTag("X-Security-Token")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef IdentityCenterMeta::genRequestDefForListApplicationAssignmentsForPrincipal() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("PrincipalId")
                  .withJsonTag("principal_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("PrincipalType")
                  .withJsonTag("principal_type")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Marker")
                  .withJsonTag("marker")
                  .withLocationType(Query_));
    FieldDef headerParamXSecurityToken;
    reqDefBuilder.withRequestField(headerParamXSecurityToken
                  .withName("XSecurityToken")
                  .withJsonTag("X-Security-Token")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef IdentityCenterMeta::genRequestDefForCreateApplicationInstanceCertificate() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXSecurityToken;
    reqDefBuilder.withRequestField(headerParamXSecurityToken
                  .withName("XSecurityToken")
                  .withJsonTag("X-Security-Token")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef IdentityCenterMeta::genRequestDefForDeleteApplicationInstanceCertificate() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXSecurityToken;
    reqDefBuilder.withRequestField(headerParamXSecurityToken
                  .withName("XSecurityToken")
                  .withJsonTag("X-Security-Token")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef IdentityCenterMeta::genRequestDefForListApplicationInstanceCertificates() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Marker")
                  .withJsonTag("marker")
                  .withLocationType(Query_));
    FieldDef headerParamXSecurityToken;
    reqDefBuilder.withRequestField(headerParamXSecurityToken
                  .withName("XSecurityToken")
                  .withJsonTag("X-Security-Token")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef IdentityCenterMeta::genRequestDefForUpdateApplicationInstanceActiveCertificate() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXSecurityToken;
    reqDefBuilder.withRequestField(headerParamXSecurityToken
                  .withName("XSecurityToken")
                  .withJsonTag("X-Security-Token")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef IdentityCenterMeta::genRequestDefForGetSsoConfiguration() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXSecurityToken;
    reqDefBuilder.withRequestField(headerParamXSecurityToken
                  .withName("XSecurityToken")
                  .withJsonTag("X-Security-Token")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef IdentityCenterMeta::genRequestDefForUpdateSsoConfiguration() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXSecurityToken;
    reqDefBuilder.withRequestField(headerParamXSecurityToken
                  .withName("XSecurityToken")
                  .withJsonTag("X-Security-Token")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef IdentityCenterMeta::genRequestDefForCreateAlias() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXSecurityToken;
    reqDefBuilder.withRequestField(headerParamXSecurityToken
                  .withName("XSecurityToken")
                  .withJsonTag("X-Security-Token")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef IdentityCenterMeta::genRequestDefForDeleteIdentityCenter() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXSecurityToken;
    reqDefBuilder.withRequestField(headerParamXSecurityToken
                  .withName("XSecurityToken")
                  .withJsonTag("X-Security-Token")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef IdentityCenterMeta::genRequestDefForDescribeRegisteredRegions() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXSecurityToken;
    reqDefBuilder.withRequestField(headerParamXSecurityToken
                  .withName("XSecurityToken")
                  .withJsonTag("X-Security-Token")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef IdentityCenterMeta::genRequestDefForGetHaConfiguration() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXSecurityToken;
    reqDefBuilder.withRequestField(headerParamXSecurityToken
                  .withName("XSecurityToken")
                  .withJsonTag("X-Security-Token")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef IdentityCenterMeta::genRequestDefForGetIdentityCenterServiceStatus() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXSecurityToken;
    reqDefBuilder.withRequestField(headerParamXSecurityToken
                  .withName("XSecurityToken")
                  .withJsonTag("X-Security-Token")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef IdentityCenterMeta::genRequestDefForListIdentityStoreAssociation() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXSecurityToken;
    reqDefBuilder.withRequestField(headerParamXSecurityToken
                  .withName("XSecurityToken")
                  .withJsonTag("X-Security-Token")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef IdentityCenterMeta::genRequestDefForListInstances() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Marker")
                  .withJsonTag("marker")
                  .withLocationType(Query_));
    FieldDef headerParamXSecurityToken;
    reqDefBuilder.withRequestField(headerParamXSecurityToken
                  .withName("XSecurityToken")
                  .withJsonTag("X-Security-Token")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef IdentityCenterMeta::genRequestDefForRegisterRegion() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXSecurityToken;
    reqDefBuilder.withRequestField(headerParamXSecurityToken
                  .withName("XSecurityToken")
                  .withJsonTag("X-Security-Token")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef IdentityCenterMeta::genRequestDefForStartIdentityCenter() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXSecurityToken;
    reqDefBuilder.withRequestField(headerParamXSecurityToken
                  .withName("XSecurityToken")
                  .withJsonTag("X-Security-Token")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef IdentityCenterMeta::genRequestDefForUpdateHaConfiguration() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXSecurityToken;
    reqDefBuilder.withRequestField(headerParamXSecurityToken
                  .withName("XSecurityToken")
                  .withJsonTag("X-Security-Token")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef IdentityCenterMeta::genRequestDefForCreateInstanceAccessControlAttributeConfiguration() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXSecurityToken;
    reqDefBuilder.withRequestField(headerParamXSecurityToken
                  .withName("XSecurityToken")
                  .withJsonTag("X-Security-Token")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef IdentityCenterMeta::genRequestDefForDeleteInstanceAccessControlAttributeConfiguration() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXSecurityToken;
    reqDefBuilder.withRequestField(headerParamXSecurityToken
                  .withName("XSecurityToken")
                  .withJsonTag("X-Security-Token")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef IdentityCenterMeta::genRequestDefForDescribeInstanceAccessControlAttributeConfiguration() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXSecurityToken;
    reqDefBuilder.withRequestField(headerParamXSecurityToken
                  .withName("XSecurityToken")
                  .withJsonTag("X-Security-Token")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef IdentityCenterMeta::genRequestDefForUpdateInstanceAccessControlAttributeConfiguration() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXSecurityToken;
    reqDefBuilder.withRequestField(headerParamXSecurityToken
                  .withName("XSecurityToken")
                  .withJsonTag("X-Security-Token")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef IdentityCenterMeta::genRequestDefForGetMfaDeviceManagementForIdentityStore() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXSecurityToken;
    reqDefBuilder.withRequestField(headerParamXSecurityToken
                  .withName("XSecurityToken")
                  .withJsonTag("X-Security-Token")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef IdentityCenterMeta::genRequestDefForPutMfaDeviceManagementForIdentityStore() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXSecurityToken;
    reqDefBuilder.withRequestField(headerParamXSecurityToken
                  .withName("XSecurityToken")
                  .withJsonTag("X-Security-Token")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef IdentityCenterMeta::genRequestDefForAttachManagedPolicyToPermissionSet() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXSecurityToken;
    reqDefBuilder.withRequestField(headerParamXSecurityToken
                  .withName("XSecurityToken")
                  .withJsonTag("X-Security-Token")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef IdentityCenterMeta::genRequestDefForAttachManagedRoleToPermissionSet() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXSecurityToken;
    reqDefBuilder.withRequestField(headerParamXSecurityToken
                  .withName("XSecurityToken")
                  .withJsonTag("X-Security-Token")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef IdentityCenterMeta::genRequestDefForCreatePermissionSet() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXSecurityToken;
    reqDefBuilder.withRequestField(headerParamXSecurityToken
                  .withName("XSecurityToken")
                  .withJsonTag("X-Security-Token")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef IdentityCenterMeta::genRequestDefForDeleteCustomPolicyFromPermissionSet() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXSecurityToken;
    reqDefBuilder.withRequestField(headerParamXSecurityToken
                  .withName("XSecurityToken")
                  .withJsonTag("X-Security-Token")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef IdentityCenterMeta::genRequestDefForDeleteCustomRoleFromPermissionSet() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXSecurityToken;
    reqDefBuilder.withRequestField(headerParamXSecurityToken
                  .withName("XSecurityToken")
                  .withJsonTag("X-Security-Token")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef IdentityCenterMeta::genRequestDefForDeletePermissionSet() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXSecurityToken;
    reqDefBuilder.withRequestField(headerParamXSecurityToken
                  .withName("XSecurityToken")
                  .withJsonTag("X-Security-Token")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef IdentityCenterMeta::genRequestDefForDescribePermissionSet() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXSecurityToken;
    reqDefBuilder.withRequestField(headerParamXSecurityToken
                  .withName("XSecurityToken")
                  .withJsonTag("X-Security-Token")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef IdentityCenterMeta::genRequestDefForDescribePermissionSetProvisioningStatus() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXSecurityToken;
    reqDefBuilder.withRequestField(headerParamXSecurityToken
                  .withName("XSecurityToken")
                  .withJsonTag("X-Security-Token")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef IdentityCenterMeta::genRequestDefForDetachManagedPolicyFromPermissionSet() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXSecurityToken;
    reqDefBuilder.withRequestField(headerParamXSecurityToken
                  .withName("XSecurityToken")
                  .withJsonTag("X-Security-Token")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef IdentityCenterMeta::genRequestDefForDetachManagedRoleFromPermissionSet() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXSecurityToken;
    reqDefBuilder.withRequestField(headerParamXSecurityToken
                  .withName("XSecurityToken")
                  .withJsonTag("X-Security-Token")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef IdentityCenterMeta::genRequestDefForGetCustomPolicyForPermissionSet() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXSecurityToken;
    reqDefBuilder.withRequestField(headerParamXSecurityToken
                  .withName("XSecurityToken")
                  .withJsonTag("X-Security-Token")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef IdentityCenterMeta::genRequestDefForGetCustomRoleForPermissionSet() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXSecurityToken;
    reqDefBuilder.withRequestField(headerParamXSecurityToken
                  .withName("XSecurityToken")
                  .withJsonTag("X-Security-Token")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef IdentityCenterMeta::genRequestDefForGetPermissionSetSummary() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXSecurityToken;
    reqDefBuilder.withRequestField(headerParamXSecurityToken
                  .withName("XSecurityToken")
                  .withJsonTag("X-Security-Token")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef IdentityCenterMeta::genRequestDefForListAccountsForProvisionedPermissionSet() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Marker")
                  .withJsonTag("marker")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("ProvisioningStatus")
                  .withJsonTag("provisioning_status")
                  .withLocationType(Query_));
    FieldDef headerParamXSecurityToken;
    reqDefBuilder.withRequestField(headerParamXSecurityToken
                  .withName("XSecurityToken")
                  .withJsonTag("X-Security-Token")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef IdentityCenterMeta::genRequestDefForListManagedPoliciesInPermissionSet() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Marker")
                  .withJsonTag("marker")
                  .withLocationType(Query_));
    FieldDef headerParamXSecurityToken;
    reqDefBuilder.withRequestField(headerParamXSecurityToken
                  .withName("XSecurityToken")
                  .withJsonTag("X-Security-Token")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef IdentityCenterMeta::genRequestDefForListManagedRolesInPermissionSet() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Marker")
                  .withJsonTag("marker")
                  .withLocationType(Query_));
    FieldDef headerParamXSecurityToken;
    reqDefBuilder.withRequestField(headerParamXSecurityToken
                  .withName("XSecurityToken")
                  .withJsonTag("X-Security-Token")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef IdentityCenterMeta::genRequestDefForListPermissionSetProvisioningStatus() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Marker")
                  .withJsonTag("marker")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Status")
                  .withJsonTag("status")
                  .withLocationType(Query_));
    FieldDef headerParamXSecurityToken;
    reqDefBuilder.withRequestField(headerParamXSecurityToken
                  .withName("XSecurityToken")
                  .withJsonTag("X-Security-Token")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef IdentityCenterMeta::genRequestDefForListPermissionSets() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Marker")
                  .withJsonTag("marker")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("PermissionSetId")
                  .withJsonTag("permission_set_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("PermissionUrn")
                  .withJsonTag("permission_urn")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Name")
                  .withJsonTag("name")
                  .withLocationType(Query_));
    FieldDef headerParamXSecurityToken;
    reqDefBuilder.withRequestField(headerParamXSecurityToken
                  .withName("XSecurityToken")
                  .withJsonTag("X-Security-Token")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef IdentityCenterMeta::genRequestDefForListPermissionSetsProvisionedToAccount() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Marker")
                  .withJsonTag("marker")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("AccountId")
                  .withJsonTag("account_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("ProvisioningStatus")
                  .withJsonTag("provisioning_status")
                  .withLocationType(Query_));
    FieldDef headerParamXSecurityToken;
    reqDefBuilder.withRequestField(headerParamXSecurityToken
                  .withName("XSecurityToken")
                  .withJsonTag("X-Security-Token")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef IdentityCenterMeta::genRequestDefForProvisionPermissionSet() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXSecurityToken;
    reqDefBuilder.withRequestField(headerParamXSecurityToken
                  .withName("XSecurityToken")
                  .withJsonTag("X-Security-Token")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef IdentityCenterMeta::genRequestDefForPutCustomPolicyToPermissionSet() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXSecurityToken;
    reqDefBuilder.withRequestField(headerParamXSecurityToken
                  .withName("XSecurityToken")
                  .withJsonTag("X-Security-Token")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef IdentityCenterMeta::genRequestDefForPutCustomRoleToPermissionSet() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXSecurityToken;
    reqDefBuilder.withRequestField(headerParamXSecurityToken
                  .withName("XSecurityToken")
                  .withJsonTag("X-Security-Token")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef IdentityCenterMeta::genRequestDefForUpdatePermissionSet() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXSecurityToken;
    reqDefBuilder.withRequestField(headerParamXSecurityToken
                  .withName("XSecurityToken")
                  .withJsonTag("X-Security-Token")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef IdentityCenterMeta::genRequestDefForCreateTagResource() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXSecurityToken;
    reqDefBuilder.withRequestField(headerParamXSecurityToken
                  .withName("XSecurityToken")
                  .withJsonTag("X-Security-Token")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef IdentityCenterMeta::genRequestDefForDeleteTagResource() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamXSecurityToken;
    reqDefBuilder.withRequestField(headerParamXSecurityToken
                  .withName("XSecurityToken")
                  .withJsonTag("X-Security-Token")
                  .withLocationType(Header_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef IdentityCenterMeta::genRequestDefForListTagResources() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Marker")
                  .withJsonTag("marker")
                  .withLocationType(Query_));
    FieldDef headerParamXSecurityToken;
    reqDefBuilder.withRequestField(headerParamXSecurityToken
                  .withName("XSecurityToken")
                  .withJsonTag("X-Security-Token")
                  .withLocationType(Header_));
    return reqDefBuilder;
}


}
}
}
}

